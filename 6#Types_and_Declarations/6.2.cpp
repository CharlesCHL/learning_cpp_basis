
#include <iostream>

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
    digits();
    return 0;
}


