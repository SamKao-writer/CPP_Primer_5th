#include <iostream>
using std::string;

int main()
{
    string s1;           // default initialization
    string s2 = s1;      // s2 is a copy of s1
    string s3 = "hiya";  // s3 is a copy of the string literal
    string s4(10, 'c');  // s4 is ccccccccccc

    string s5 = "hiya";  // copy initialization
    string s6("hiya");   // direct initialization
    string s7(10, 'c');  // direct initialization

    string s8 = string(10, 'c');  // copy initialization
    
    return 0;
}