
#include <iostream>

using namespace std;

void copy_fct()
{
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10];

    for (auto i = 0; i != 10; ++i)
    {
        v2[i] = v1[i];
    }
    for (auto i = 0; i != 10; ++i)
    {
        cout << v1[i];
    }
    cout << endl;
    for (auto i = 0; i != 10; ++i)
    {
        cout << v1[i];
    }
    cout << endl;
    return ;
}

void print()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto x : v)
    {
        cout << x;
    }
    cout << endl;
    for (auto x : {10, 21, 32, 43, 54, 65})
    {
        cout << x << " ";
    }
    cout << endl;
    return ;
}

void increment()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto& x : v)
    {
        ++x;
    }
    for (auto x : v)
    {
        cout << x;
    }
    cout << endl;
}

int count_x(char* p, char x)
{
    if (p == nullptr)
        return 0;
    int count = 0;
    for (; *p != 0; ++p)
    {
        if (*p == x)
            ++count;
    }
    return count;
}

int main(void)
{
    // copy_fct();

    // print();
    
    // increment();

    // char* str = "Hello world!\n";
    // char c = 'l';
    // cout << count_x(str, c);

    return 0;
}


