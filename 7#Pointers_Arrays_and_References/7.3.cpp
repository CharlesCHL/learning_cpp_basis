

#include <iostream>

using namespace std;

int a1[10]; //  静态存储中的10个int

void f(void)
{
    int a2[20]; //  栈上的10个int
    int* p = new int[40];    //自由存储上的40个int
    return ;
}

const char* p = "Heraclitus";
const char* q = "Heraclitus";

void g()
{
    if (p == q) 
        cout << "one!\n";
    else
        cout << "teo!\n"; 
    return ;
}

int main(void)
{
    int v1[] = {1, 2, 3, 4};
    char v2[] = {'a', 'b', 'c', 0};
    //  int v3[2] = {1, 2, 3, 4};   报错
    char v4[3] = {'a', 'b', 0};
    int v5[8] = {1, 2, 3, 4};   //其余为0

    char str1[] = "hello";
    char str2[] = {'w', 'o', 'r', 'l', 'd'};
    string str3 = "charles";
    char* str4;
    cout << sizeof("Bohr") << " " 
        << sizeof(str1) << " "
        << sizeof(str2) << " "
        << sizeof(str3) << " " 
        << sizeof(str4) << endl;

    // g();

    // cout << "beep at end of message\a\n";

    string s1 = "\\w\\\\w";
    string s2 = R"(\w\\w)";




    return 0;
}



