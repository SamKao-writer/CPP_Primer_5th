#include <iostream>
#include "Sales_item.h"

typedef double wages;    // wages is a synonym for double
typedef wages base, *p;  // base is a synonym for double,
                         // p is a synonym for double*
using SI = Sales_item;   // SI is a synonym for Sales_item (C++ 11)

int main()
{
    wages hourly, weekly;  // same as double hourly, weekly;
    SI item;               // same as Sales_item item;

    return 0;
}