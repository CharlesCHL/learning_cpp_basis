
#include <iostream>
#include <list>
#include <vector>

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

class List_container:public Container
{
    std::list<double> ld;
public:
    List_container() {}
    List_container(initializer_list<double> il):ld{il} {}
    ~List_container() {}
    double& operator[](int i);
    int size() const {return ld.size();} 
};

double& List_container::operator[](int i)
{
    for (auto& x:ld)
    {
        if (i == 0) return x;
        --i;
    }
    throw out_of_range("List container");
}

// 3.2.4

class Point
{
    double x;
    double y;
};

class Shape
{
public:
    virtual Point center() const = 0;
    virtual void move(Point to) = 0;
    virtual void draw() const = 0;
    virtual void rotate(int angle) = 0;

    virtual ~Shape() {}
    //
};

void rotate_all(std::vector<Shape*>& v, int angle)
{
    for (auto p : v)
        p->rotate(angle);
}

class Circle:public Shape
{
public:
    Circle(Point p, int rr);
    Point center()const {return x;}
    void move(Point to) {x = to;}

    void draw()const;
    void rotate(int) {}
private:
    Point x;
    int r;
};

class Smiley:public Circle
{
public:
    Smiley(Point p, int r):Circle{p, r}, mouth{nullptr} {}
    ~Smiley()
    {
        delete mouth;
        for (auto p : eyes)
            delete p;
    }
    void move(Point to);
    void draw()const;
    void rotate(int);
    void add_eye(Shape* s) {eyes.push_back(s);}
    void set_mouth(Shape* s);
    virtual void wink(int i);
    //
private:
    std::vector<Shape*> eyes;
    Shape* mouth;
};

void Smiley::draw()const
{
    Circle::draw();
    for (auto p : eyes)
        p->draw();
    mouth->draw();
}

int main(void)
{
    return 0;
}


