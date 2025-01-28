#include <iostream>
using namespace ::std;


void concatenate()
{
    string output, curstr;
    while (cin >> curstr) {
        output += curstr;
    }
    cout << output << endl;
}

void add_space()
{
    string output, curstr;
    while (cin >> curstr) {
        if (!output.empty())
            output += " " + curstr;
        else
            output += curstr;
    }
    cout << output << endl;
}

int main()
{
    // concatenate();
    add_space();
    return 0;
}