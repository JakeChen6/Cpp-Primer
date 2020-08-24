// Rewrite the word-counting program from § 11.1 (p. 421) to use insert instead of subscripting.
// Which program do you think is easier to write and read? Explain your reasoning.

#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <map>
using std::map;

#include <string>
using std::string;

// The subscripting approach is easier to write and read.
// When using inserting, we need to explicitly check whether the insertion is successful
// and then handle the increment.
// Using the subscripting approach, if word is in the map already, just increment the count.
// Is word is not in the map, the subscript operator creates a new element with value 0 for us,
// which is exactly the correct value to start with.

int main()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word){
        //++word_count[word];
        auto ret = word_count.insert({word, 1});
        if (!ret.second)
            ++ret.first->second;
    }
    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << endl;
    return 0;
}
