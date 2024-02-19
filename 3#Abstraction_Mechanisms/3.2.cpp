
#include <iostream>

using namespace std;

// 3.2.1.1
class complex 
{
    double re, im;
public:
    complex(double r, double i):re{r}, im{i} {}
    complex(double r):re{r}, im{0} {}
    complex():re{0}, im{0} {}

    double real()const {return re;}
    void real(double d) {re = d;}
    double imag()const {return im;}
    void imag(double d) {im = d;}

    complex& operator+=(complex z) 
    {
        re += z.re;
        im += z.im; 
        return *this;
    }
    complex& operator-=(complex z) 
    {
        re -= z.re;
        im -= z.im; 
        return *this;
    }
    // complex& operator*=(complex z);
    // complex& operator/=(complex z);
};

complex operator+(complex a, complex b) {return a += b;}
complex operator-(complex a, complex b) {return a -= b;}
complex operator-(complex a) {return {-a.real(), -a.imag()};}
// complex operator*(complex a, complex b) {return  a *= b;}
// complex operator/(complex a, complex b) {return  a/= b;}

bool operator==(complex a, complex b)
{
    return (a.real() == b.real() && a.imag() == b.imag());
}

bool operator!=(complex a, complex b)
{
    return !(a == b);
}

// 3.2.1.2
class Vector 
{
private:
    double* elem;
    int sz;
public:
    Vector(int s):elem{new double[s]}, sz{s}
    {
        for (int i = 0; i != s; ++i) 
            elem[i] = 0;
    }

    ~Vector() {delete[] elem;}
    double& operator[](int i);
    int size()const;
};

// 3.2.2
class Container
{
public:
    virtual double& operator[](int) = 0;
    virtual int size() = 0;
    virtual ~Container() {}
};

void use(Container& c)
{
    const int sz = c.size();
    for (int i = 0; i != sz; i++)
        cout << c[i] << "\n";
}

class Vector_container:public Container 
{
    Vector v;
public:
    Vector_container(int s):v(s) {}
    ~Vector_container() {}

    double& operator[](int i) {return v[i];}
    int size()const {return v.size();}
};


int main(void)
{
    return 0;
}


