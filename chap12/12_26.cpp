#include <memory>
using std::allocator;

#include <string>
using std::string;

#include <iostream>
using std::cin; using std::cout;

int main()
{
    unsigned n = 20;
    allocator<string> alloc;            // object that can allocate strings
    auto const p = alloc.allocate(n);   // allocate n unconstructed strings
    auto q = p;     // q points to the last constructed element

    string s;
    while (cin >> s && q != p + n)      // q not equal to off the end pointer
        alloc.construct(q++, s);
    const size_t size = q - p;
    for (size_t i = 0; i != size; ++i)  // print the strings
        cout << *(p+i) << " ";
    cout << "\n";
    while (q != p)              // destroy the constructed elements
        alloc.destroy(--q);
    alloc.deallocate(p, n);     // return the memory to the system
}