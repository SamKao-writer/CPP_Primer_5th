/*
 * Use the decrement operator to write a for that prints the number from ten
 * down to zero.
 */

#include <iostream>

int main()
{
    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;
    return 0;
}