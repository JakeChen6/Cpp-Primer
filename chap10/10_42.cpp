#include <list>
using std::list;

#include <string>
using std::string;

#include <iostream>
using std::cout;

void elimDeups(list<string> &);
void print(list<string> &);

int main()
{
    list<string> words = {"the", "quick", "red", "fox", "jumps",
                          "over", "the", "slow", "red", "turtle"};
    elimDeups(words);
    return 0;
}

void elimDeups(list<string> &words)
{
    // the list member versions should be used in preference to the 
    // generic algorithms for lists. List-specific versions of these
    // algorithms can achieve much better performance than the
    // corresponding generic versions.

    cout << "before eliminating duplicates: ";
    print(words);

    words.sort();
    cout << "after sorting: ";
    print(words);

    words.unique();
    cout << "after the call to unique: ";
    print(words);
}

void print(list<string> &words)
{
    for (const auto &s : words)
        cout << s << " ";
    cout << "\n";
}