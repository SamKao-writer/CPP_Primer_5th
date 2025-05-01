#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

struct Person;
istream &read(istream &is, Person &p);

struct Person {
    // friends declarations
    friend istream &read(istream &is, Person &p);
    friend ostream &print(ostream &os, const Person &p);
    
    // constructors
    Person() = default;
    Person(const string &n, const string &addr) : name(n), address(addr) {}
    Person(istream &is) { read(is, *this); }

    // data members
    string name;
    string address;
};
// declarations for nonmember parts of interface of Person class
istream &read(istream &is, Person &p);
ostream &print(ostream &os, const Person &p);

#endif