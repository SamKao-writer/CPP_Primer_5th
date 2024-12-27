#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, curr;
    if (std::cin >> item) {
        while (std::cin >> curr) {
            if (curr.isbn() == item.isbn()) {
                item += curr;
            } else {
                std::cout << item << std::endl;
                item = curr;
            }
        }
        std::cout << item << std::endl;
    }
    return 0;
}