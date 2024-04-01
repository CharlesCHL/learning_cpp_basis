
#include <iostream>

using namespace std;

int main(void)
{
    int v[] = {1, 2, 3, 4};
    int* p1 = v;
    int* p2 = &v[0];
    int* p3 = v + 4;
    cout << p1 << " "
        << p2 << " "
        << p3 << endl;

    return 0;
}




