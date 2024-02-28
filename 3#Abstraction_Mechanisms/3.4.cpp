
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <complex>

// 3.4.1
template<typename T>
class Vector 
{
private:
    T* elem;
    int sz;
public:
    Vector(int s);
    ~Vector() {delete[] elem;}

    //
    T& operator[](int i);
    const T&operator[](int i)const;
    int size()const {return sz;}
};

template<typename T>
Vector<T>::Vector(int s)
{
    if (s < 0) throw Negative_size{};
    elem = new T[s];
    sz = s;
}

template<typename T>
const T& Vector<T>::operator[](int i)const
{
    if (i < 0 || size() <= i)
        throw out_of_range{"Vector::operator[]"};
    return elem[i];
}

void write(const Vector<std::string>& vs)
{
    for (int i = 0; i != vs.size(); ++i)
        std::cout << vs[i] << "\n";
}

template<typename T>
T* begin(Vector<T>& x)
{
    return &x[0];
}

template<typename T>
T* begin(const Vector<T>& x)
{
    return &x[0];
}

template<typename T>
T* end(Vector<T>& x)
{
    return x.begin() + x.size();
}

template<typename T>
T* end(const Vector<T>& x)
{
    return x.begin() + x.size();
}

// 与书上不同，书上并没有提供const式的bigin()和end()函数，可能是由于编译器的变笨问题
void f2(const Vector<std::string>& vs)
{
    for (auto& s : vs)
        std::cout << s << "\n";
}


// 3.4.2
template<typename Container, typename Value>
Value sum(const Container& c, Value v)
{
    for (auto x : c)
        v += x;
    return v;
}

void user(Vector<int>& vi, std::list<double>& ld, std::vector<std::complex<double>>& vc)
{
    int x = sum(vi, 0);
    double d = sum(vi, 0.0);
    double dd = sum(ld, 0.0);
    auto z = sum(vc, std::complex<double>{});
}


// 3.4.3

int main(void)
{
    return 0;
}


