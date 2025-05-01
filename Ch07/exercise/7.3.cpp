#include <iostream>
#include <string>
using namespace std;

struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    Sales_data &combine(const Sales_data &);
    string isbn() const { return bookNo; }
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

int main()
{
    Sales_data total;
    double price1;
    if (cin >> total.bookNo >> total.units_sold >> price1) {
        total.revenue = total.units_sold * price1;
        Sales_data trans;
        double price2;
        while (cin >> trans.bookNo >> trans.units_sold >> price2) {
            trans.revenue = trans.units_sold * price2;
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << total.bookNo << " " << total.units_sold << " "
                     << total.revenue << endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue
             << endl;
    } else {
        cout << "No data?" << endl;
        return -1;
    }

    return 0;
}