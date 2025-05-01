#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>
using namespace std;

class Sales_data
{
    // friends declarations for nonmember Sales_data operations added
    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend istream &read(istream &, Sales_data &);
    friend ostream &print(ostream &, const Sales_data &);
    // other members and access specifiers as before
public:
    Sales_data() = default;
    Sales_data(const string &s, unsigned us, double p)
        : bookNo(s), units_sold(us), revenue(us * p)
    {
    }
    Sales_data(const string &s) : bookNo(s) {}
    Sales_data(istream &is);
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);

private:
    double avg_price() const { return units_sold ? revenue / units_sold : 0; }
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
// declarations for nonmember parts of the Sales_data interface
Sales_data add(const Sales_data &, const Sales_data &);
istream &read(istream &, Sales_data &);
ostream &print(ostream &, const Sales_data &);

#endif