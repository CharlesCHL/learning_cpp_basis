

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <map>

using namespace std;

struct Entry
{
    string name;
    int number;
};

bool operator<(const Entry& x, const Entry& y)
{
    return x.name < y.name;
}

// void f(vector<Entry>& vec, list<Entry>& lst)
// {
//     sort(vec.begin(), vec.end());
//     unique_copy(vec.begin(), vec.end(), lst.begin());
//     return ;
// }

// list<Entry> f(vector<Entry>& vec)
// {
//     list<Entry> res;
//     sort(vec.begin(), vec.end());
//     unique_copy(vec.begin(), vec.end(), back_inserter(res));
//     return res;
// }
// 上面两段代码会报错


//  4.5.1
bool has_c(const string& s, char c)
{
    auto p = find(s.begin(), s.end(), c);
    if (p != s.end())
        return true;
    else
        return false;
}

vector<string::iterator> find_all(string& s, char c)
{
    vector<string::iterator> res;
    for(auto p = s.begin(); p != s.end(); ++p)
    {
        if (*p == c)
            res.push_back(p);
    }
    return res;
}

void test1()
{
    string m {"Mary had a little lamb"};
    for (auto p : find_all(m, 'a'))
    {
        if (*p != 'a')
            cerr << "a bug!\n";
    }
    return ;
}

template<typename C, typename V>
vector<typename C::iterator> find_all(C& c, V v)    // 这里的typename必不可少
{
    vector<typename C::iterator> res;
    for (auto p = c.begin(); p != c.end(); ++p)
    {
        if (*p == v)
            res.push_back(p);
    }
    return res;
}

void test2()
{
    string m {"Mary had a little lamb"};
    for (auto p : find_all(m, 'a'))
    {
        if (*p != 'a')
            cerr << "string bug!\n";
    }

    list<double> ld {1.1, 2.2, 3.3, 1.1};
    for (auto p : find_all(ld, 1.1))
    {
        if (*p != 1.1)
            cerr << "list bug!\n";
    }

    vector<string> vs {"red", "blue", "green", "green", "orange", "green"};
    for (auto p : find_all(vs, "green"))
    {
        if (*p != "green")
            cerr << "vector bug!\n";
    }
}


//  4.5.3
ostream_iterator<string> oo {cout};
void test3()
{
    *oo = "hello,";
    ++oo;
    *oo= " world!\n";
    return ;
}

//  4.5.44
void f(map<string, int>& m)
{
    auto p = find_if(m.begin(), m.end(), greater_than{42});
}

struct greater_than {
    int val;
    greater_than(int v):val{v} {}
    bool operator()(const pair<string, int>& r) 
    {return r.second > 42;} 
};

int main(void)
{
    test1();
    test2();
    test3();
    return 0;
}

