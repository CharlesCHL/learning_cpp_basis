

#include <iostream>
#include <string>

using namespace std;

string compose(const string& name, const string& domain)
{
    return name + "@" + domain;
}

void m2(string& s1, string& s2)
{
    s1 = s1 + "\n";
    s2 += "\n";
}

string name = "Niels Stroustrup";
void m3()
{
    cout << name << endl;
    string s = name.substr(6, 10);
    cout << s << endl;
    name.replace(0, 5, "nicholas");
    cout << name << endl;
    name[0] = toupper(name[0]);
    cout << name << endl;
}

int main(void)
{
    cout << compose("chl", "163.com");

    m3();

    return 0;
}


