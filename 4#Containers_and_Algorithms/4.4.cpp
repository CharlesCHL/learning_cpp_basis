
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>

using namespace std;

struct Entry
{
    string name;
    int number;
};

ostream& operator<<(ostream& os, const Entry& e)
{
    return os << "{\"" << e.name << "\", " << e.number << "}";
}

istream& operator>>(istream& is, Entry& e)
{
    char c, c2;
    if (is >> c && c == '{' && is >> c2 && c2 == '"')
    {
        string name;
        while (is.get(c) && c != '"')
            name += c;
        
        if (is >> c && c == ',')
        {
            int number = 0;
            if (is >> number >> c && c == '}')
            {
                e = {name, number};
                return is;
            }
        }
    }
    // is.setf(ios_base::failbit);  // 这条语句会报错
    is.clear();
    return is;
}


// 4.4.1    vector
vector<Entry> phone_book = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur", 345678}
};

void print_book(const vector<Entry>& book)
{
    // for (int i = 0; i != book.size(); ++i)
    //     cout << book[i] << endl;
    for (const auto& x : book)
        cout << x << "\n";
    
    return ;
}

vector<int> v1 = {1, 2, 3, 4};
vector<string> v2;
vector<double> v3(32, 9.9);

void input()
{
    for (Entry e; cin >> e;)
        phone_book.push_back(e);
    return ;
}

template<typename T>
class Vec:public std::vector<T> 
{
    using vector<T>::vector;

    T& operator[](int i)
    {
        return vector<T>::at(i);
    }
    const T& operator[](int i)const
    {
        return vector<T>::at(i);
    }
};


// 4.4.2    list
list<Entry> phone_book_2 = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur", 3456789}
};

int get_number_1(const string& s)
{
    for (const auto x : phone_book_2)
    {
        if (x.name == s)
            return x.number;
    }
    return 0;
}

int get_number_2(const string& s)
{
    for (auto p = phone_book_2.begin(); p != phone_book_2.end(); ++p)   // 迭代器
    {
        if (p->name == s)
            return p->number;
    }
    return 0;
}

void f(const Entry& ee, list<Entry>::iterator p, list<Entry>::iterator q)
{
    phone_book_2.insert(p, ee);
    phone_book_2.erase(q);
    return ;
}


// 4.4.3    map
map<string, int> phone_book_3 = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur", 3456789}
};

int get_number_3(const string& s)
{
    return phone_book_3[s];
}


// 4.4.4    unordered_map
unordered_map<string, int> phone_book_4 = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur", 3456789}
};

int get_number_4(const string& s)
{
    return phone_book_4[s];
}


int main(void)
{
    // print_book(phone_book);
    // input();
    // print_book(phone_book);
    // ge

    return 0;
}


