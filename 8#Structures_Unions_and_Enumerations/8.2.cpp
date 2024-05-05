

#include <iostream>
#include <vector>
#include <array>

using namespace std;

struct Address {
    const char* name;
    int number;
    const char* street;
    const char* town;
    char state[2];
    const char* zip;

};

void f1()
{
    Address jd;
    jd.name = "Jim Dandy";
    jd.number = 61;
    return ;
}

void f2()
{
    Address jd = {
        "Jim Dandy",
        61,
        "South St",
        "New Providence",
        {'N', 'J'},
        "07974"
    };
    return ;
}

void print_addr_1(Address* p)
{
    cout << p->name << "\n"
        << p->number << " " << p->street << "\n" 
        << p->town << "\n"
        << p->state[0] << p->state[1] << " " << p->zip << "\n";
    return ;
}

void print_addr_2(const Address& r)
{
    cout << r.name << "\n"
        << r.number << " " << r.street << "\n" 
        << r.town << "\n"
        << r.state[0] << r.state[1] << " " << r.zip << "\n";
    return ;
}

struct Point {
    int x, y;
};

// struct Points {
//     vector<Point> elem;
//     Points(Point p0) {elem.push_back(p0);}
//     Points(Point p0, Point p1) 
//     {
//         elem.push_back(p0); 
//         elem.push_back(p1);
//     }
// };

// Point points1[3] {{1, 2}, {3, 4}, {5, 6}};
// int x2 = points1[2].x;

// struct Array {
//     Point elem[3];
// };
// Array points2 {{{1, 2}, {3, 4}, {5, 6}}};
// int y2 = points2.elem[2].y;

// Array shift(Array a, Point p)
// {
//     for (int i = 0; i != 3; i++)
//     {
//         a.elem[i].x += p.x;
//         a.elem[i].y += p.y;
//     }
//     return a;
// }

template<typename T, size_t N> struct array1
{
    T elem[N];

    T* begin() noexcept {return elem;}
    const T* begin() const noexcept {return elem;}
    
    T* end() noexcept {return elem + N;}
    const T* end() const noexcept {return elem + N;}

    constexpr size_t size() noexcept {return N;};

    T& operator[](size_t n) {return elem[n];}
    const T& operator[](size_t n) const {return elem[n];}

    T* data() noexcept {return elem;}
    const T* date() const noexcept {return elem;}

    // ...

};


using Array = array1<Point, 3>;

Array points = {{{1, 2}, {3, 4}, {5, 6}}};
int x2 = points[2].x;
int y2 = points[2].y;

Array shift(Array a, Point p)
{
    for (int i = 0; i != a.size(); ++i)
    {
        a[i].x += p.x;
        a[i].y += p.y;
    }
    return a;
}

Array ax = shift(points, {10, 20});
int x3 = ax[2].x;
int y3 = ax[2].y;

void f3()
{
    cout << x2 << y2 << endl;
    cout << x3 << y3 << endl;
    return ;
}

ostream& operator<<(ostream& os, Point p)
{
    os << "{" << p.x << ", " << p.y << "}";
    return os;
}

void print(Point a[], int s)
{
    for (int i = 0; i != s; ++i)
    {
        cout << a[i] << "\n";
    }
    return ;
}

template<typename T, size_t n>  // 这里只能是size_t，而不能是int
void print(array1<T, n>& a)
{
    for (int i = 0; i != a.size(); ++i)
    {
        cout << a[i] << "\n";
    }
    return ;
}

Point point1[] = {{1, 2}, {3, 4}, {5, 6}};
array1<Point, 3> point2 = {{{1, 2}, {3, 4}, {5, 6}}};

void f4()
{
    print(point1, 3);
    print(point2);
    return ;
}

int main(void)
{
    Address jd = {
        "Jim Dandy",
        61,
        "South St",
        "New Providence",
        {'N', 'J'},
        "07974"
    };
    print_addr_2(jd);
    f3();
    f4();
    return 0;
}


