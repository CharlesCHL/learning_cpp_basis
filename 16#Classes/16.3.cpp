
#include <string>
#include <cstdlib>
#include <iostream>

namespace Chrono {
    enum class Month {jan = 1, feb, mar, apr, may, jun,
                        jul, aug, sep, oct, nov, dec};
    class Date {
    public:
        class Bad_date{};
        explicit Date(int dd = {}, Month mm = {}, int yy = {});
        int day()const;
        Month month()const;
        int year()const;

        std::string string_rep()const;
        void char_rep(char s[], int max)const;

        Date& add_year(int n);
        Date& add_month(int n);
        Date& add_day(int n);

    private:
        bool is_valid();
        int d, m, y;
    };

    bool is_date(int d, Month m, int y);
    bool is_leapyear(int y);

    bool operator==(const Date& a, const Date& b);
    bool operator!=(const Date& a, const Date& b);

    const Date& default_date();

    std::ostream& operator<<(std::ostream& os, const Date& d);
    std::istream& operator>>(std::istream& is, Date& d);

}

Chrono::Date::Date(int dd, Month mm, int yy):d {dd}, m {(int)mm}, y {yy}
{
    if (y == 0) y = default_date().year();
    if (m == (int)Month{}) m = (int)default_date().month();
    if (d == 0) d = default_date().day();

    if (!is_valid()) throw Bad_date(); 
}

int Chrono::Date::day()const
{
    return d;
}

Chrono::Month Chrono::Date::month()const
{
    return (Month)m;
}

int Chrono::Date::year()const
{
    return y;
}

bool Chrono::Date::is_valid()
{
    return Chrono::is_date(d, (Chrono::Month)m, y);
}

bool Chrono::is_leapyear(int y)
{
    return true;
}

bool Chrono::is_date(int d, Month m, int y)
{
    int ndays;
    switch(m) {
    case Month::feb:
        ndays = 28 + is_leapyear(y);
        break;
    case Month::apr: 
    case Month::jun: 
    case Month::sep: 
    case Month::nov: 
        ndays = 30;
        break;
    case Month::jan: 
    case Month::mar: 
    case Month::may: 
    case Month::jul: 
    case Month::aug: 
    case Month::oct:
    case Month::dec:
        ndays = 31;
        break;
    default:
        return false;  
    }
    return 1 <= d && d <= ndays;
}

const Chrono::Date& Chrono::default_date()
{
    static Date d {1, Chrono::Month::jan, 1970};
    return d;
}

inline bool Chrono::operator==(const Chrono::Date &a, const Chrono::Date &b)
{
    return a.day() == b.day() && 
            a.month() == b.month() &&
            a.year() == b.year(); 
}

inline bool Chrono::operator!=(const Chrono::Date &a, const Chrono::Date &b)
{
    return !(a == b);
}

void test(void)
{
    std::cout << Chrono::is_leapyear(2024) << "\n";
    std::cout << Chrono::is_date(15, Chrono::Month::jan, 2024) << "\n";
    std::cout << Chrono::is_date(46, Chrono::Month::aug, 2024) << "\n";

    return ;
}

int main(void)
{
    test();
    return 0;
}



