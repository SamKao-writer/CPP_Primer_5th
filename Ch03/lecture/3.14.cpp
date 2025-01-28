#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    vector<string> svec;  // default initialization; svec has no elements

    vector<int> ivec;  // initially empty
    // give ivec some values
    vector<int> ivec2(ivec);     // copy elements of ivec into ivec2
    vector<int> ivec3 = ivec;    // copy elements of ivec into ivec3
    // vector<string> svec(ivec2);  // error: svec holds strings, not ints

    return 0;
}