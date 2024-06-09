

#include <iostream>

class X {
private:
    int m;
public:
    X(int i = 0) : m {i} {}

    int mf(int i)
    {
        int old = m;
        m = i;
        return old;
    }

};

X var {7};

void user(X var, X* ptr)
{
    int x = var.mf(7);
    int y = ptr->mf(9);
    // int z = var.m;   报错，不能访问私有对象； 
}

class Date {
public:
    void init(int dd, int mm, int yy);
    void add_year(int n);
    void add_month(int n);
    void add_day(int n);
private:
    int d, m, y;
};

void Date::init(int dd, int mm, int yy)
{
    d = dd;
    m = mm;
    y = yy;
}

Date d1 = my_birthday;
Date d2 {my_birthday};

void f(Date& d3)
{
    d3 = my_birthday;
    return ;
}



Date my_birthday;

void f()
{
    Date today;
    today.init(16, 10, 1996);
    my_birthday.init(30, 12, 1950);

    Date tomorrow = today;
    tomorrow.add_day(1);
}

int main(void)
{
    return 0;
}




