/*
 * Write a program that prompts the user for two integers.
 * Print each number in the range specified by those two integers.
 */

#include <iostream>

int main()
{
    int val1 = 0, val2 = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> val1 >> val2;

    // test if val1 >= val2
    if (val2 > val1) {
        val1 = val1 ^ val2;
        val2 = val1 ^ val2;
        val1 = val1 ^ val2;
    }

    for (int i = val2; i <= val1; ++i)
        std::cout << i << std::endl;

    return 0;
}