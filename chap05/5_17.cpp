#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> ivec1 = {0, 1, 1, 2};
    vector<int> ivec2 = {0, 1, 1, 2, 3, 5, 8};

    if (ivec1.size() < ivec2.size()) {
        auto it = ivec1.begin();
        auto it2 = ivec2.begin();
        while (it != ivec1.end() && *it == *it2)
            ++it, ++it2;
        return it == ivec1.end() ? true : false;
    } else {
        auto it = ivec2.begin();
        auto it2 = ivec1.begin();
        while (it != ivec2.end() && *it == *it2)
            ++it, ++it2;
        return it == ivec2.end() ? true : false;
    }
}