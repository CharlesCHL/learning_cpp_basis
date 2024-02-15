
#include <iostream>

using namespace std;

// 2.3.1
// struct Vector
// {
//     int sz;
//     double* elem;
// };

// void vector_init(Vector& v, int s)
// {
//     v.elem = new double[s];
//     v.sz = s;
//     return ;
// }

// double read_and_sum(int s)
// {
//     Vector v;
//     vector_init(v, s);
//     for (int i = 0; i != s; ++i)
//     {
//         cin >> v.elem[i];
//     }
//     double sum = 0;
//     for (int i = 0; i != s; i++)
//     {
//         sum += v.elem[i];
//     }
//     return sum;
// }

// void f(Vector v, Vector& rv, Vector* pv)
// {
//     int i1 = v.sz;
//     int i2 = rv.sz;
//     int i3 = pv->sz;
//     return ;
// }

// 2.3.2
class Vector
{
public:
    Vector(int s):elem{new double[s]}, sz{s} {}
    double& operator[](int i) {return elem[i];}
    int size() {return sz;}
private:
    double* elem;
    int sz;
};

double read_and_sum2(int s)
{
    Vector v(s);
    for (int i = 0; i != v.size(); i++)
    {
        cin >> v[i];
    }
    double sum = 0;
    for (int i = 0; i != v.size(); ++i)
    {
        sum += v[i];
    }
    return sum;
}

// 2.3.3
enum class Color {red, blue, green};
enum class Traffic_light {green, yellow, red};

Traffic_light& operator++(Traffic_light& t)
{
    switch (t)
    {
    case Traffic_light::green: return t = Traffic_light::yellow;
    case Traffic_light::yellow: return t = Traffic_light::red;
    case Traffic_light::red: return t = Traffic_light::green;
    default: return t;
    }
}

int main(void)
{
    // cout << read_and_sum(5) << endl;

    // cout << read_and_sum2(5) << endl;

    Color col = Color::red;
    Traffic_light light = Traffic_light::red;
    Traffic_light next = ++light;


    return 0;
}
