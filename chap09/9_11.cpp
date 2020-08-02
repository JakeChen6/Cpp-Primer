#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void print(vector<int>);

// C C
vector<int> ivec1;                                  // empty vector

// C c1(c2)
vector<int> ivec = {0, 1, 2, 3};
vector<int> ivec2 (ivec);                           // 0, 1, 2, 3

// C c1 = c2
vector<int> ivec3 = ivec;                           // 0, 1, 2, 3

// C c{a, b, c, ...}
vector<int> ivec4 {0, 1, 2, 3};                     // 0, 1, 2, 3

// C c = {a, b, c, ...}
vector<int> ivec5 = {0, 1, 2, 3};                   // 0, 1, 2, 3

// C c(b, e)
vector<int> ivec6 (ivec5.cbegin(), ivec5.cend());   // 0, 1, 2, 3

int main()
{
    print(ivec1);
    print(ivec2);
    print(ivec3);
    print(ivec4);
    print(ivec5);
    print(ivec6);
    return 0;
}

void print(vector<int> ivec)
{
    for (auto it = ivec.cbegin(); it != ivec.cend(); ++it)
        cout << *it << " ";
    cout << std::endl;
}