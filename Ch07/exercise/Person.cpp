#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

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