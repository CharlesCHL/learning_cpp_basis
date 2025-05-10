

#include <iostream>
#include <string>

//  using namespace std;

namespace Chrono {
    enum class Month {
        jan = 1, feb, mar, apr,
        may = 5, jun, jul, aug,
        sep = 9, oct, nov, dec

    };
    class Date {
        public:
        class Bad_date {};
        explicit Date(int dd = {}, Month mm = {}, int yy = {});
        
        inline int day() const {return d;}
        inline Month month() const {return static_cast<Month>(m);}
        inline int year() const {return y;}

        std::string string_rep() const;
        void char_rep(char s[], int max) const;

        Date& add_year(int n);
        Date& add_month(int n);
        Date& add_day(int n);

        private:
        bool is_valid();
        int d, m, y;
    };

    bool is_date(int d, Month m, int y);
    bool is_leapyear(int y);

    Date& operator+(Date& a, int n);

    bool operator==(const Date& a, const Date& b);
    bool operator!=(const Date& a, const Date& b);

    const Date& default_date();
    std::ostream& operator<<(std::ostream& os, const Date& d);
    std::istream& operator>>(std::istream& os, Date& d);
    int diff(const Date& a, const Date& b);
}

Chrono::Date::Date(int dd, Month mm, int yy):d{dd}, m{(int)mm}, y{yy} {
    if (y == 0) y = default_date().year();
    if (m == static_cast<int>(Month{})) m = static_cast<int>(default_date().month());
    if (d == 0) d = default_date().day();

    if (!is_valid()) throw Bad_date();
}

Chrono::Date& Chrono::Date::add_month(int n) {
    if (n == 0) return *this;

    if (n > 0) {
        int delta_y = n/12;
        int mm = static_cast<int>(m) + (n % 12);
        if (mm > 12) {
            delta_y += 1;
            mm -= 12;
        }

        y += delta_y;
        m = mm;
    }
    return *this;
}

bool Chrono::Date::is_valid() {
    return is_date(d, static_cast<Month>(m), y);
}

bool Chrono::is_date(int d, Month m, int y) {
    int ndays;
    switch (m) {
        case Month::feb:
            ndays = 28 + is_leapyear(y);
            break;
        case Month::apr: case Month::jun: case Month::sep: case Month::nov:
            ndays = 30;
            break;
        case Month::jan: case Month::mar: case Month::may: case Month::jul:
        case Month::aug: case Month::oct: case Month::dec:
            ndays = 31;
            break;
        default:
            return false;
    }
    return 1 <= d && d <= ndays;
}

bool Chrono::is_leapyear(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

const Chrono::Date& Chrono::default_date() {
    static Chrono::Date d {1, Chrono::Month::jan, 1970};
    return d;
}

using namespace Chrono;

void f(Date& d) {
    Date lvb_day {16, Month::dec, d.year()};
    if (d.day() == 29 && d.month() == Month::feb) { }
    std::cout << "day after" << d + 1 << "\n";
    Date dd;
    std::cin >> dd;
    if (dd == d) std::cout << "Hurray!\n";

}

void test(void) {
    std::cout << static_cast<int>(Month{}) << "\n";
    std::cout << static_cast<int>(is_date(29, Month::feb, 2001)) << "\n";
    std::cout << static_cast<int>(is_date(29, Month::feb, 2000)) << "\n";
}

int main(void) {
    test();
    return 0;
}

