#include <iostream>
#include <string>
using namespace ::std;

int main()
{
    string s("some string");
    // process characters in s until we run out of characters or we hit a
    // whitespace
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);

    cout << s << endl;

    return 0;
}