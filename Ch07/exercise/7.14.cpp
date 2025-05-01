#include <iostream>
#include <string>
using namespace std;

struct Sales_data;
istream &read(istream &is, Sales_data &item);

struct Sales_data {
    // constructors
    Sales_data() : bookNo(""), units_sold(0), revenue(0.0){};
    Sales_data(const string &no) : bookNo(no) {}
    Sales_data(const string &no, unsigned us, double price)
        : bookNo(no), units_sold(us), revenue(us * price)
    {
    }
    Sales_data(istream &is) { read(is, *this); }

    // member functions
    Sales_data &combine(const Sales_data &);
    string isbn() const { return bookNo; }

    // data member
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

istream &read(istream &is, Sales_data &item)
{
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << endl;
    return os;
}

int main()
{
    Sales_data d1;
    Sales_data d2("12345");
    Sales_data d3("24680", 5, 2.5);
    Sales_data d4(cin);

    print(cout, d1);
    print(cout, d2);
    print(cout, d3);
    print(cout, d4);

    return 0;
}