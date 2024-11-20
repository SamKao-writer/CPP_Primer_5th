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

    while (val2 <= val1) {
        std::cout << val2 << std::endl;
        ++val2;
    }

    return 0;
}