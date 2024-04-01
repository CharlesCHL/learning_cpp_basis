

#include <iostream>

using namespace std;

void f(int* pi)
{
    void* pv = pi;
    int* pi2 = static_cast<int*>(pv);
}

int main(void)
{
    char c = 'a';
    char* p = &c;
    char c2 = *p;
    cout << c << " "
        << c2 << endl;
    
    int* pi;        //  指向int的指针
    char** ppc;     //  指向字符指针的指针
    int* ap[15];    //  ap为一个数组，包含15个指向int的指针
    int (*fp)(char*);
    int* f(char*);


    return 0;
}



