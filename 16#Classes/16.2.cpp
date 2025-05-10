

#include <iostream>
#include <string>

using namespace std;

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

struct cache {
    bool valid;
    string rep;
};

class Date {
public:
    Date(int dd = 0, int mm = 0, int yy = 0);
    void init(int dd, int mm, int yy);
    void add_year(int n);
    void add_month(int n);
    void add_day(int n);

    string string_rep_1() const;
    string string_rep_2() const;

    static void set_default(int dd, int mm, int yy);
private:
    int d, m, y;
    cache* c;

    mutable bool cache_valid;
    mutable string cache;
    void compute_cache_value() const;

    static Date default_date;
};

Date::Date(int dd, int mm, int yy)
{
    d = dd ? dd : default_date.d;
    m = mm ? mm : default_date.m;
    d = yy ? yy : default_date.y;
}

void Date::init(int dd, int mm, int yy)
{
    d = dd;
    m = mm;
    y = yy;
}

void Date::add_day(int n)
{

}

void Date::compute_cache_value() const
{

}

string Date::string_rep_1() const
{
    if (!cache_valid) {
        compute_cache_value();
        cache_valid = true;
    }
    return cache;
}

string Date::string_rep_2() const
{
    if (!c->valid) {
        compute_cache_value();
        c->valid = true;
    }
    return c->rep;
}

Date Date::default_date = {2, 10, 2003};

void Date::set_default(int dd, int mm, int yy)
{
    default_date = {dd, mm, yy};
}

Date my_birthday;

Date d1 = my_birthday;
Date d2 {my_birthday};

void f(Date& d3)
{
    d3 = my_birthday;
    return ;
}

void f() {
    Date today;
    today.init(16, 10, 1996);
    my_birthday.init(30, 12, 1950);

    Date tomorrow = today;
    tomorrow.add_day(1);
}

template<typename T>
class Tree {
    using value_type = T;
    enum Policy {rb, splay, treeps};
    class Node {
        Node* right;
        Node* left;
        value_type value;
    public:
        void f(Tree*);
    };
    Node* top;
public:
    void g(const T&);
};

template<typename T>
void Tree<T>::g(const T& p)
{

}

int main(void)
{
    return 0;
}




