

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Work {
    string author;
    string name;
    int year;
};

Work s9 {"Beethoven",
         "Symphony No.9 int D minor, Op.125; Choral",
         1824};
Work currently_playing {s9};
Work none {};       //  {"", "", 0}
Work alpha;         //  {"", "", 0}
void f1()
{
    Work beta;      //  {"", "", unknown}
}

void f2()
{
    int* p1 = new int;      //  unknown
    int* p2 = new int {};   //  0
    int* p3 = new int {7};  //  7
}

struct X {
    X(int i):a{i} {}
    int a;
};

void f3()
{
    //  X x0;
    //  X x1 {};
    X x2 {2};
    //  X x3 {"two"};
    //  X x4 {1, 2};
    X x5 {x2};
}

struct Y : X {
    X m {0};
    Y(int a):X{a}, m{a} {}
    Y():X{0} {}
};

X g {1};

void f4(int a)
{
    //  X def {};
    Y de2 {};
    X* p {nullptr};
    X var {2};
    p = new X {4};
    X list[] {1, 2, 3};
    std::vector<X> v {1, 2, 3, 4};
}

struct s1 {
    int a, b;
};

struct s2 {
    int a, b;
    s2(int aa = 0, int bb = 0):a{aa}, b{bb} {};
};

//  s1 x11 (1, 2);
s1 x12 {1, 2};
//  s1 x13 (1);
s1 x14 {1};

s2 x21 (1, 2);
s2 x22 {1, 2};
s2 x23 (1);
s2 x24 {1};

void f5()
{
    int a0;                 //  unknown
    int a1();               //  function
    int a {};               //  0
    double d {};            //  0.0
    char* p {};             //  nullptr
    int* p1 = new int;      //  unknown
    int* p2 = new int {};   //  0
}

int main(void)
{
    return 0;
}

