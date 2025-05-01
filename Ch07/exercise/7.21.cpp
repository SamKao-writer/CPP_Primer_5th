#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;

int main()
{
    Sales_data d1;
    Sales_data d2("12345", 2, 3.4);
    Sales_data d3("24680", 5, 2.5);
    Sales_data d4(cin);

    print(cout, d1);
    print(cout, d2);
    print(cout, d3);
    print(cout, d4);

    return 0;
}