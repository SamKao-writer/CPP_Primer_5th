#include <iostream>

int main()
{
    int ival = 1024;
    int &refVal = ival;  // refVal refers to (is another name for) ival
    // int &refVal2;        // error: a reference must be initialized

    refVal = 2;       // assigns 2 to the object to which refVal refers (ival)
    int ii = refVal;  // same as ii = ival
    std::cout << ival << std::endl;

    // ok: refVal3 is bound to the object to which refVal is bound (ival)
    int &refVal3 = refVal;
    // initializes i from the value int the object to which refVal is bound
    int i = refVal;  // ok: initializes i to the same value as ival
    return 0;
}