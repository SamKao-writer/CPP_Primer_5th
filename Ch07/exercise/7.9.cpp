#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    string address;
};

istream &read(istream &is, Person &p)
{
    is >> p.name >> p.address;
    return is;
}

ostream &print(ostream &os, const Person &p)
{
    os << p.name << " " << p.address << endl;
    return os;
}

int main()
{
    Person p1;
    read(cin, p1);
    print(cout, p1);
    return 0;
}