

#include <iostream>
#include <string>
#include <vector>
#include <complex>

using namespace std;

char ch;
string s;
auto count = 1;
const double pi {3.1415926535897};
extern int error_number;

const char* name = "Njal";
const char* season[] = {"spring", "summer", "fall", "winter"};
vector<string> people {name, "Skar", "Gunnar"};
struct Date {int d, m, y;};
int day(Date* p) 
{
    return p->d;
}
double sqrt(double);
template<class T> T abs(T a) {return a < 0 ? -a : a;}

constexpr int fac(int n) {return n < 2 ? 1 : n * fac(n - 1);}
constexpr double zz {1.1 * fac(7)};

using Cmplx = std::complex<double>;
struct User;
enum class Beer {Carlsberg, Tuborg, Thor};
namespace NS {int a;}


//  6.3.1
const char* kings[] = {"Antigonus", "Seleucus", "Ptolemy"};
/**
 * 后缀的绑定比前缀更紧密
 * char* kings[] 是char指针的数组
 * char (*kings)[] 是指向char数组的指针
 * */


//  6.3.2
int x, y;   //  int x; int y;

int* p, z;  //  int* p; int z;
int m, *q;  //  int m; int* q;
int v[10], *pv; //  int v[10]; int* pv; 
//  最好避免以上写法


//  6.3.4
int a = 10;

void f()
{
    int a;
    a = 1;
    {
        int a;
        ::a = 2;
        a = 2;
    }
    a = 3;
}


//  6.3.5

int main(void)
{

    return 0;
}

