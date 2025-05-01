#include <iostream>
#include <string>
using namespace std;

struct Sales_data;
istream &read(istream &is, Sales_data &item);

struct Sales_data {
    // constructors
    Sales_data() = default;
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
    Sales_data total(cin);
    while (cin) {
        Sales_data trans(cin);
        if (total.isbn() == trans.isbn())
            total.combine(trans);
        else {
            print(cout, total);
            total = trans;
        }
    }
    return 0;
}