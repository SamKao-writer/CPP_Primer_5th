#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<string> articles = {"a", "an", "the"};

    vector<string> v1{"a", "an", "the"};  // list initialization
    // vector<string> v2("a", "an", "the");  // error

    vector<int> ivec(10, -1);        // ten int elements, each initialized to -1
    vector<string> svec(10, "hi!");  // ten strings; each element is "hi!"

    vector<int> ivec2(10);           // ten elements, each initialized to 0
    vector<string> svec2(10);        // ten elements, each initilaized to empty string

    return 0;
}