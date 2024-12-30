#include <iostream>

int main()
{
    int errNumb = 0;
    int *const curErr = &errNumb;  // curErr will always point to errNumb
    const double pi = 3.14159;
    const double *const pip = &pi;  // pip is a const pointer to a const object

    return 0;
}