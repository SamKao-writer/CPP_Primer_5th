#include <iostream>
using namespace ::std;

void check_bigger()
{
    string string1, string2;
    if (cin >> string1 >> string2) {
        if (string1 == string2)
            cout << "These two strings are the same!" << endl;
        else {
            if (string1.size() > string2.size())
                cout << string1 << " is bigger!" << endl;
            else
                cout << string2 << " is bigger!" << endl;
        }
    }
}

void check_longer()
{
    string string1, string2;
    if (cin >> string1 >> string2) {
        if (string1.size() == string2.size())
            cout << "These two strings have same length!" << endl;
        else {
            if (string1.size() > string2.size())
                cout << string1 << " is longer!" << endl;
            else
                cout << string2 << " is longer!" << endl;
        }
    }
}

int main()
{
    // check_bigger();
    check_longer();
    return 0;
}