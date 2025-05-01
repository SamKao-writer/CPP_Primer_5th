#include <iostream>
#include <string>
using namespace std;

struct Person;
istream &read(istream &is, Person &p);

struct Person {
    // constructors
    Person() = default;
    Person(const string &n, const string &addr) : name(n), address(addr) {}
    Person(istream &is) { read(is, *this); }

    // data members
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
    Person p2("Peter", "ABCDE");
    Person p3(cin);
    print(cout, p1);
    print(cout, p2);
    print(cout, p3);
    return 0;
}