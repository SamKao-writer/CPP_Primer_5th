#include <string>
#include <iostream>
#include "Sales_data.h"

void ex1_20()
{
    Sales_data item;
    double price;
    while (std::cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        std::cout << item.bookNo << " " << item.units_sold << " "
                  << item.revenue << std::endl;
    }
}

void ex1_21()
{
    Sales_data item, curItem;
    double price;
    if (std::cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        while (std::cin >> curItem.bookNo >> curItem.units_sold >> price) {
            if (curItem.bookNo == item.bookNo) {
                item.revenue += curItem.units_sold * price;
                item.units_sold += curItem.units_sold;
            } else {
                std::cout << item.bookNo << " " << item.units_sold << " "
                          << item.revenue << std::endl;
                item.bookNo = curItem.bookNo;
                item.units_sold = curItem.units_sold;
                item.revenue = curItem.units_sold * price;
            }
        }
        std::cout << item.bookNo << " " << item.units_sold << " "
                  << item.revenue << std::endl;
    }
}

void ex1_22()
{
    Sales_data item, curItem;
    double price;
    if (std::cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        while (std::cin >> curItem.bookNo >> curItem.units_sold >> price) {
            if (curItem.bookNo == item.bookNo) {
                item.revenue += curItem.units_sold * price;
                item.units_sold += curItem.units_sold;
            } else {
                std::cout << item.bookNo << " " << item.units_sold << " "
                          << item.revenue << std::endl;
                item.bookNo = curItem.bookNo;
                item.units_sold = curItem.units_sold;
                item.revenue = curItem.units_sold * price;
            }
        }
        std::cout << item.bookNo << " " << item.units_sold << " "
                  << item.revenue << std::endl;
    }
}

void ex1_23()
{
    Sales_data item, curItem;
    double price;
    int cnt = 1;
    if (std::cin >> item.bookNo >> item.units_sold >> price) {
        while (std::cin >> curItem.bookNo >> curItem.units_sold >> price) {
            if (curItem.bookNo == item.bookNo) {
                cnt++;
            } else {
                std::cout << item.bookNo << " " << cnt << std::endl;
                item.bookNo = curItem.bookNo;
                cnt = 1;
            }
        }
        std::cout << item.bookNo << " " << cnt << std::endl;
    }
}

int main()
{
    // ex1_20();
    // ex1_21();
    // ex1_22();
    ex1_23();

    return 0;
}