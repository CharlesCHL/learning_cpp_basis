
#include <iostream>

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

    Vector(const Vector& a);
    Vector& operator=(const Vector& a);
    Vector(Vector&& a);
    Vector& operator=(Vector&& a);

    double& operator[](int i)const;
    int size()const;
};

void bad_copy(Vector v1)
{
    Vector v2 = v1;
    v1[0] = 2;
    v2[1] = 3;
}

Vector::Vector(const Vector& a):elem{new double[sz]}, sz{a.sz}
{
    for (int i = 0; i != sz; ++i)
    {
        elem[i] = a.elem[i];
    }
}

Vector& Vector::operator=(const Vector& a)
{
    double* p = new double[a.sz];
    for (int i = 0; i != a.sz; ++i)
    {
        p[i] = a.elem[i];
    }
    delete[] elem;
    elem = p;
    sz = a.sz;
    return *this;
}

Vector operator+(const Vector& a, const Vector& b)
{
    
    if (a.size() != b.size())
        std::cout << "error\n";
    Vector res(a.size());
    for (int i = 0; i != a.size(); ++i)
        res[i] = a[i] + b[i];
    return res;
}

Vector::Vector(Vector&& a):elem{a.elem}, sz{a.sz}
{
    a.elem = nullptr;
    a.sz = 0;
}

Vector& Vector::operator=(Vector&& a)
{
    elem = a.elem;
    a.elem = nullptr;
    sz = a.sz;
    a.sz = 0;
}

int main(void)
{
    return 0;
}


