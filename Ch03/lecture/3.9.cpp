#include <iostream>
using namespace ::std;

int main()
{
    string str("some string");
    // prints the characters in str one character to a line
    for (auto c : str)
        cout << c << endl;
    return 0;
}