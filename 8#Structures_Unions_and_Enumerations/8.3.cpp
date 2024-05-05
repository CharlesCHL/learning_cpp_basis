

#include <iostream>

using namespace std;

enum Type {str, num};

struct Entry1 {
    char* name;
    Type t;
    char* s;
    int i;
};

void f1(Entry1* p)
{
    if (p->t == str)
        cout << p->s;
    else 
        cout << p->i;
    return ;
}

union Value {
    char* s;
    int i;
};

struct Entry2 {
    char* name;
    Type t;
    Value v;
};

void f2(Entry2* p)
{
    if (p->t == str)
        cout << p->v.s;
    else
        cout << p->v.i;
    return ;
}

class Entry3 {
private:
    enum class Tag {number, text};
    Tag type;
    union {
        int i;
        string s;
    };
public:
    struct Bad_entry {};
    string name;
    ~Entry3();
    Entry3& operator=(const Entry3&);
    Entry3(const Entry3&);

    int number() const;
    string text() const;

    void set_number(int n);
    void set_text(const string&);
};

int Entry3::number() const
{
    if (type != Tag::number) throw Bad_entry{};
    return i;
}

string Entry3::text() const
{
    if (type != Tag::text) throw Bad_entry{};
    return s;
}

void Entry3::set_number(int n)
{
    if (type == Tag::text) 
    {
        s.~string();
        type = Tag::number;
    }
    i = n;
}

void Entry3::set_text(const string& ss)
{
    if (type == Tag::text)
        s == ss;
    else 
    {
        new(&s) string {ss};
        type = Tag::text;
    }
}

Entry3& Entry3::operator=(const Entry3& e)
{
    if (type == Tag::text && e.type == Tag::text)
    {
        s = e.s;
        return *this;
    }

    if (type == Tag::text) s.~string();
    switch (e.type)
    {
    case Tag::number:
        i = e.i;
        break;
    case Tag::text:
        new(&s) string {e.s};
        type = Tag::text;
        break;
    }
}

Entry3::~Entry3()
{
    if (type == Tag::text)
        s.~string();
}

int main(void)
{
    return 0;
}




