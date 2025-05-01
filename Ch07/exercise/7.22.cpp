#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

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