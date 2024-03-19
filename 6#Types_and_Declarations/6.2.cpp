
#include <iostream>
#include <limits>
#include <cstdint>

using namespace std;

//  6.2.2
void f(void)
{
    bool a = true;
    bool b = true;
    bool x = a + b;
    bool y = a || b;
    bool z = a - b;

    cout << x << " "
        << y << " "
        << z << endl;
    
    return ;
}

void g(int* p)
{
    bool b = p;
    bool b2 {p != nullptr};
    return ;
}


//  6.2.3
void intval(void)
{
    for (char c; cin >> c;)
    {
        cout << "the value of " << c << " is " << int{c} << "\n";
    }
    return ;
}

void digits(void)
{
    for (int i = 0; i != 10; ++i)
    {
        cout << static_cast<char>('0' + i);
    }
}



int main(void)
{
    // f();
    // intval();
    // digits();

    // char c = 255;
    // int i = c;
    // cout << i << endl;

    // signed char sc = -140;
    // unsigned char uc = sc;
    // cout << uc << endl;

    // char v1[] = "a\xah\129";
    // char v2[] = "a\xah\127";
    // char v3[] = "a\xad\127";
    // char v4[] = "a\xad\0127";

    // cout << v1 << "\n" 
    //     << v2 << "\n" 
    //     << v3 << "\n"
    //     << v4 << "\n";

    //  6.2.4
    // cout << 0xF0UL << " " << 0LU << "\n";

    //  6.2.5
    // float f1 = 3.141592653f;
    // double d1 = 2.997925;
    // long double ld1 = 3.14e-12L;

    //  6.2.8
    char c = 'b';
    bool b = true;
    short si = 2;
    int i = 10;
    long li = 888;
    long long ll = 999999;
    int* ip = &i;
    float f = 3.14;
    double d = 3.14159;
    long double ld = 3.141592653e-3141592653L;
    char ca[] = "Hello, world!";

    cout << sizeof(c) << " "
        << sizeof(b) << " "
        << sizeof(si) << " "
        << sizeof(i) << " "
        << sizeof(li) << " "
        << sizeof(ll) << " "
        << sizeof(ip) << " "
        << sizeof(f) << " "
        << sizeof(d) << " "
        << sizeof(ld) << " "
        << sizeof(ca) << " "
        << endl;
    
    //  以上的数值在<limits>中都有，如下
    cout << "size of long " << sizeof(1L) << "\n";
    cout << "size of long long " << sizeof(1LL) << "\n";

    cout << "largest short == " << std::numeric_limits<short>::max() << "\n";
    cout << "largest float == " << std::numeric_limits<float>::max() << "\n";
    cout << "char is signed == " << std::numeric_limits<char>::is_signed << "\n";

    // int16_t x {0xaabb};
    // int64_t xxxx {0xaaaabbbbccccdddd};
    // int_least16_t y;
    // int_least32_t yy;
    // int_fast32_t z;
    // cout << x << endl << xxxx << endl;

    //  6.2.9
    auto ac = alignof('c');
    auto ai = alignof(1);
    auto ad = alignof(2.0);
    int a[20];
    auto aa = alignof(a);

    cout << ac << " " 
        << ai << " "
        << ad << " "
        << aa << " " 
        << endl;


    return 0;
}


