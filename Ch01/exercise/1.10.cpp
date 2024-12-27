/*
 * Use the decrement operator to write a while that prints the number from ten
 * down to zero.
 */

#include <iostream>

int main()
{
    int val = 10;
    while (val >= 0) {
        std::cout << val << std::endl;
        --val;
    }

    return 0;
}