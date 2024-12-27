/*
 * Write a program that prompts the user for two integers.
 * Print each number in the range specified by those two integers.
 * It should handle the condition whether first element is bigger than second one.
 */

#include <iostream>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int val1 = 0, val2 = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> val1 >> val2;

    if (val1 > val2)
        swap(&val1, &val2);

    while (val1 <= val2) {
        std::cout << val1 << std::endl;
        ++val1;
    }

    return 0;
}