

#include <iostream>


enum class Traffic_light {red, yellow, green};
enum class Warning {green, yellow, orange, red};

Warning a1 = Warning::green;
Traffic_light a2 = Traffic_light::green;

enum class Warning1 : int {green, yellow, orange, red};
enum class Warning2 : char {green, yellow, orange, red};
// 默认类型为int

enum class Printer_flags {
    acknowledge = 1,
    paper_empty = 2,
    busy = 4,
    out_of_black = 8,
    out_of_color = 16
};

constexpr Printer_flags operator|(Printer_flags a, Printer_flags b)
{
    return static_cast<Printer_flags>((static_cast<int>(a)) | (static_cast<int>(b)));
}

constexpr Printer_flags operator&(Printer_flags a, Printer_flags b)
{
    return static_cast<Printer_flags>((static_cast<int>(a)) & (static_cast<int>(b)));
}

void try_to_print(Printer_flags x)
{
    if (static_cast<int>(x & Printer_flags::acknowledge)) 
    {
        //
    }
    else if (static_cast<int>(x & Printer_flags::busy))
    {
        //
    }
    else if (static_cast<int>(x & (Printer_flags::out_of_black | Printer_flags::out_of_color)))
    {
        //  
    }
    return ;
}
// 上try_to_print函数在书中未加显式类型转换，在编译时报错

void g(Printer_flags x)
{
    switch (x)
    {
    case Printer_flags::acknowledge:
        //
        break;
    case Printer_flags::busy:
        //
        break;
    case Printer_flags::out_of_black:
        //
        break;
    case Printer_flags::out_of_color:
        //
        break;
    case Printer_flags::out_of_black & Printer_flags::out_of_color:
        //
        break;
    }
}


int main(void)
{
    std::cout << sizeof(Warning) << " "
        << sizeof(Warning1) << " "
        << sizeof(Warning2) << "\n";

    std::cout << static_cast<int>(Warning::green) << " "
        << static_cast<int>(Warning::yellow) << " "
        << static_cast<int>(Warning::orange) << " "
        << static_cast<int>(Warning::red) << "\n";

    

    std::cout << static_cast<int>(Printer_flags::acknowledge) << " "
        << static_cast<int>(Printer_flags::paper_empty) << " "
        << static_cast<int>(Printer_flags::busy) << " "
        << static_cast<int>(Printer_flags::out_of_black) << " " 
        << static_cast<int>(Printer_flags::out_of_color) << "\n";

    Printer_flags pf1 = Printer_flags::acknowledge;
    Printer_flags pf2 = static_cast<Printer_flags>(1);
    Printer_flags pf3 = static_cast<Printer_flags>(100);

    std::cout << static_cast<int>(Printer_flags::acknowledge | Printer_flags::paper_empty) << "\n";
    std::cout << static_cast<int>(Printer_flags::acknowledge & Printer_flags::paper_empty) << "\n";
    std::cout << static_cast<int>((Printer_flags::acknowledge | Printer_flags::paper_empty) & Printer_flags::paper_empty) << "\n";


    return 0;

}




