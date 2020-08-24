// Rewrite the map that stored vectors of children’s names with a key that
// is the family last name for the exercises in § 11.2.1 (p. 424) to use a multimap.

#include <map>
using std::multimap;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cin; using std::cout;

int main()
{
    multimap<string, string> families;
    string last_name, child_name;
    while (cin >> last_name)
        if (cin >> child_name)
            families.insert({last_name, child_name});
    last_name = "";
    for (const auto &f : families) {
        if (last_name != f.first) {
            cout << "\n" << f.first << " - ";
            last_name = f.first;
        }
        cout << f.second << " ";
    }
    return 0;
}