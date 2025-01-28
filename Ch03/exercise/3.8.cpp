#include <iostream>
using namespace ::std;

void use_while()
{
    string s("Hello world");
    string::size_type ind = 0;
    while (ind < s.size()) {
        s[ind] = 'X';
        ++ind;
    }
    cout << s << endl;
}

void use_for()
{
    string s("Hello world");
    for (string::size_type ind = 0; ind < s.size(); ++ind)
        s[ind] = 'X';
    cout << s << endl;
}

int main()
{
    // use_while();
    use_for();
    return 0;
}