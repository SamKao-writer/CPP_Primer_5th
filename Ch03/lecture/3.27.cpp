#include <iostream>
#include <vector>
using namespace ::std;

int main()
{
    string s("abcdefg");
    char sought = s[0];
    auto beg = s.begin(), end = s.end();
    auto mid = s.begin() + (end - beg) / 2;  // original midpoint

    while (mid != end && *mid != sought) {
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }

    cout << *mid << endl;
    return 0;
}

/*
 * Why we don't write auto mid = (beg + end) / 2?
 * Ans: First, we can't add two iterator type.
 * Second,(beg + end) may lead not get a correct iterator in the same container.
 */