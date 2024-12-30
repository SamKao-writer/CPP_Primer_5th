#include <iostream>

typedef char *pstring;

int main()
{
    const pstring cstr = 0;  // cstr is a const pointer to char
    const pstring *ps;       // ps is a pointer to const pointer to char

    return 0;
}

/*
 * How to interpret const pstring cstr = 0?
 * It is not like preprocessor to do the string replacement,
 * its interpretation should be "cstr is a const pstring",
 * and since pstring is "pointer to char". Therefore,
 * the correct interpretation is
 * "cstr is a const pointer to char".
 *
 * Also, this rule can be used to second statement:
 * "ps is a pointer to const pointer to char".
 */