#include <map>
using std::map;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <algorithm>
using std::find;

#include <iostream>
using std::cin; using std::cout;

// The advantages include
// 1. set objects have a find member, so there is no need to include the header <algorithm>,
// and the find operation is much more concise

int main()
{
    map<string, size_t> word_count;
    vector<string> exclude = {"the", "but", "and", "or", "an", "a",
                              "The", "But", "And", "Or", "An", "A"};
    string word;
    while (cin >> word)
        if (find(exclude.cbegin(), exclude.cend(), word) == exclude.cend())
            ++word_count[word];
    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second << " time(s)." << "\n";
    return 0;
}