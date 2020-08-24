#include <map>
using std::map;

#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <algorithm>
using std::transform;

#include <cctype>
using std::tolower; using std::isalpha;

#include <string>
using std::string;

int main()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word) {
        // find the first punctuation
        auto it = word.cbegin();
        while (it != word.cend() && isalpha(*it))
            ++it;
        // get rid of the punctuation
        word = word.substr(0, it - word.cbegin());
        // transform all letters to lowercase
        transform(word.begin(), word.end(), word.begin(),
            [] (char c) { return tolower(c); });
        ++word_count[word];
    }

    // print the word counts
    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << endl;
    return 0;
}