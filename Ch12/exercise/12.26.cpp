#include <iostream>
#include <memory>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    std::allocator<string> alloc;
    constexpr size_t n = 10;  // capacity

    auto const p = alloc.allocate(n);  // string *const p
    string s;
    auto q = p;  // string *q
    while (cin >> s && q != p + n)
        alloc.construct(q++, s);

    const size_t sz = q - p;  // size

    for (auto pos = p; pos != q; ++pos)
        std::cout << *pos << std::endl;

    while (q != p)
        alloc.destroy(--q);
    alloc.deallocate(p, n);

    /**
      string *const p = new string[n];
      string s;
      string *q = p;
      while (cin >> s && q != p + n)
        *q++ = s;
      const size_t size = q - p;
      // use the array
      delete[] p;
    /**/

    return 0;
}