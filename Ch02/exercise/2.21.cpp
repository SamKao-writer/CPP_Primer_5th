#include <iostream>

int main()
{
    int i = 0;
    // double *dp = &i;      // invalid: cannot convert int* to double*
    // int *ip = i;          // invalid: invalid conversion from int to int*
    int *p = &i;

    return 0;
}