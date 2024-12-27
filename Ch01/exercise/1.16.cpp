/*
 * Write our own version of a program that prints the sum
 * of a set of integers read from cin.
 */

#include <iostream>

int main()
{
    int sum = 0;
    for (int val = 0; std::cin >> val;)
        sum += val;

    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}