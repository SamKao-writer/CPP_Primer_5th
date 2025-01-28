#include <iostream>
using namespace ::std;

int main()
{
    const string s = "Keep Out!";
    for (auto &c : s) {   // c is const char &s
        cout << c << endl;
    }
    return 0;
}