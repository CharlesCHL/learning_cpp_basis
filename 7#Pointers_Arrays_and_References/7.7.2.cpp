
#include <iostream>

using namespace std;

string f(string&& s)
{
    if (s.size())
    {
        s[0] = toupper(s[0]);
    }
    return s;
}

template<class T>
void swap1(T& a, T& b)
{
    T tmp {a};
    a = b;
    b = tmp;
    return ;
}

template<class T>
void swap2(T& a, T& b)
{
    T tmp {static_cast<T&&>(a)};
    a = static_cast<T&&>(b);
    b = static_cast<T&&>(tmp);
}

template<class T>
void swap3(T& a, T& b)
{
    T tmp {std::move(a)};
    a = std::move(b);
    b = std::move(tmp);
}
// swap3与swap2完全等价,std::move(x)等价于static_cast<X&&>(x)

int main(void)
{
    string var {"Cambridge"};
    string f();
    
    // //左值引用
    string& r1 {var};
    // string& r2 {f()};    //引用到右值
    // string& r3 {"Princeton"};    //引用到临时变量
    
    // //右值引用
    // string&& rr1 {f()};
    // string&& rr2 {var};  //引用到左值
    string&& rr3 {"Oxford"};
    
    // const string cr1& {"Harvard"};

    int a = 0;
    int& b = a;
    int& c = a;
    
    return 0;
}

// 一个关于右值引用的视频 BV1ZA41167eL from bilibili
