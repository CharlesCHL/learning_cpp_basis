
#include <iostream>
#include <vector>

using namespace std;

// template<typename T>
// class vector {
//     T* elem;
// public:
//     T& operator[](int i) {return elem[i];}
//     const T& operator[](int i)const {return elem[i];}

//     void push_back(const T& a);

// };

// void f(vector<double>& v){
//     double d1 = v[1];
//     v[2] = 7;
//     v.push_back(d1);
// }
// 上面一段与书上不同，书上的代码会报错


void f()
{
    int var = 1;
    int& r {var};
    int x = r;
    cout << var << r << x << endl;
    r = 2;
    cout << var << r << x << endl;
    return ;
}

void g()
{
    int var = 0;
    int& rr {var};
    cout << var << rr << endl;;
    ++rr;
    cout << var << rr << endl;
    int* p1 = &var;
    int* p2 = &rr;
    cout << p1 << " " << p2 << endl;
    return ;
}

void increment(int& aa)
{
    ++aa;
    return ;
}

template<class K, class V>
class Map {
public:
    V& operator[](const K& v);
    pair<K, V>* begin() {return &elem[0];}
    pair<K, V>* end() {return &elem[0] + elem.size();}
private:
    vector<pair<K, V>>elem;
};

template<class K, class V>
V& Map<K, V>::operator[](const K& k)
{
    for (auto& x : elem)
        if (k == x.first)
            return x.second;
    elem.push_back({k, V{}});
    return elem.back().second;
}

void f1()
{
    int x = 1;
    increment(x);
    cout << x << endl;
    return ;
}


int main(void)
{
    f();
    g();
    f1();

    Map<string, int> buf;
    for (string s; cin >> s;)
        ++buf[s];
    for (const auto& x : buf)
        cout << x.first << " : " << x.second << endl;
    return 0;
}



