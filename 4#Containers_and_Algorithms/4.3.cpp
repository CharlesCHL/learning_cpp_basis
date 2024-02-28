

#include <iostream>

using namespace std;

void f()
{
    cout << 10;
}

void g()
{
    int i{10};
    cout << i;
}

void h(int i)
{
    cout << "the value of i is";
    cout << i;
    cout << "\n";
}

void h2(int i)
{
    cout << "the value of i is " << i << "\n";
}

void k()
{
    int b = 'b';
    char c = 'c';
    cout << 'a' << b << c;
}

void f2()
{
    int i;
    cin >> i;
    double d;
    cin >> d;
}

void hello()
{
    cout << "Please enter your name\n";
    string str;
    cin >> str;
    cout << "Hello, " << str << "!\n";
}

void hello_line()
{
    cout << "Please enter your name\n";
    string str;
    getline(cin, str);
    cout << "Hello, " << str << "!\n";
}

// 4.3.3
struct Entry
{
    string name;
    int number;
};

ostream& operator<<(ostream& os, const Entry& e)
{
    return os << "{\"" << e.name << "\", " << e.number << "}";
}

istream& operator>>(istream& is, Entry& e)
{
    char c, c2;
    if (is >> c && c == '{' && is >> c2 && c2 == '"')
    {
        string name;
        while (is.get(c) && c != '"')
            name += c;
        
        if (is >> c && c == ',')
        {
            int number = 0;
            if (is >> number >> c && c == '}')
            {
                e = {name, number};
                return is;
            }
        }
    }
    // is.setf(ios_base::failbit);  这条语句会报错
    return is;
}

int main(void)
{
    f();
    g();
    h(10);
    h2(10);
    k();
    cout << endl;

    // hello();    //只能读取单个单词
    // hello_line();   //可以读取一整行

    return 0;
}

