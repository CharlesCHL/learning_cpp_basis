
#include <iostream>
#include <string>
#include <vector>

struct Tracer {
    std::string mess;
    Tracer(const std::string& s):mess{s} {std::clog << mess;}
    ~Tracer() {std::clog << "~" << mess;}
};

void f1(const std::vector<int>& v)
{
    Tracer tr {"in f()\n"};
    for (auto x : v) {
        Tracer tr {std::string{"v lop "} + std::to_string(x) + "\n"};
    }
}

class Nonlocal {
public:
    void destroy() {this->~Nonlocal();}
private:
    ~Nonlocal() {std::cout << "~Nonlocal()" << "\n";};
};

void f2()
{
    //  Nonlocal x;
    Nonlocal* p = new Nonlocal;
    //  delete p;
    p->destroy();
    return ;
}

class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape();
};

class Circle : public Shape {
public:
    void draw();
    ~Circle();
};

void f3(Shape* p)
{
    p->draw();
    delete p;
}

int main(void)
{
    f1({2, 3, 5});
    return 0;
}


