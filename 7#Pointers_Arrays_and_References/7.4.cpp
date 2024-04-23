
#include <iostream>

using namespace std;

template<typename T>
int byte_diff(T* p, T* q)
{
    return reinterpret_cast<char*>(q) - reinterpret_cast<char*>(p);
}

void diff_test()
{
    int vi[10];
    short vs[10];
    cout << vi << " " << &vi[1] << " "
        << &vi[1] - &vi[0] << " "
        << byte_diff(&vi[0], &vi[1]) << endl;
    cout << vs << " " << &vs[1] << " "
        << &vs[1] - &vs[0] << " "
        << byte_diff(&vs[0], &vs[1]) << endl;
    return ;
}

int ma[3][5];
void init_ma()
{
    for (int i = 0; i != 3; ++i)
    {
        for (int j = 0; j != 5; ++j)
            ma[i][j] = 10 * i + j;
    }
    return ;
}

void print_ma()
{
    for (int i = 0; i != 3; ++i)
    {
        for (int j = 0; j != 5; ++j)
            cout << ma[i][j] << "\t";
        cout << endl;
    }
}


void comp(double arg[10])
{
    for (int i = 0; i != 10; ++i)
    {
        arg[i] += 99;
    }
}

void f()
{
    double a1[10];
    double a2[5];
    double a3[100];

    comp(a1);
    // comp(a2);    // 报错
    comp(a3);
    return ;
}

void print_m35(int m[3][5])
{
    for (int i = 0; i != 3; ++i)
    {
        for (int j = 0; j != 5; ++j)
            cout << m[i][j] << "\t";
        cout << "\n";
    }
}

void print_mi5(int m[][5], int dim1)
{
    for (int i = 0; i != dim1; ++i)
    {
        for (int j = 0; j != 5; ++j)
            cout << m[i][j] << "\t";
        cout << "\n";
    }
}

void print_mij(int* m, int dim1, int dim2)
{
    for (int i = 0; i != dim1; ++i)
    {
        for (int j = 0; j != dim2; ++j)
            cout << *(m + dim2 * i + j) << "\t";
        cout << "\n";
    }
}

int main(void)
{
    int v[] = {1, 2, 3, 4};
    int* p1 = v;
    int* p2 = &v[0];
    int* p3 = v + 4;
    cout << p1 << " "
        << p2 << " "
        << p3 << endl;

    //  a[j] == *(&a[0] + j) == *(a + j) == *(j + a) == j[a];
    int a[3] = {1, 2, 3};
    cout << a[1] << " " << 1[a] << endl;

    diff_test();

    init_ma();
    // print_ma();
    // print_m35(ma);
    // print_mi5(ma, 3);
    // print_mij(&ma[0][0], 3, 5);
    

    return 0;
}




