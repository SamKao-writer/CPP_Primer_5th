#include <iostream>

int main()
{
    int &refVal4 = 10;  // error: initializer must be an object
    double dval = 3.14;
    int &refVal5 = dval;  // error: initializer must be an int object

    return 0;
}