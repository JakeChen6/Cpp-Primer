#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using std::vector;
using std::string;
using std::stable_sort;
using std::unique;
using std::stable_partition;
using std::for_each;    // map
using std::cout;

void elimDeups(vector<string> &);
void print(vector<string> &);
void biggies(vector<string> &, vector<string>::size_type);
string make_plural(int, const string &, const string &);

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps",
                            "over", "the", "slow", "red", "turtle"};
    biggies(words, 5);
    return 0;
}

void elimDeups(vector<string> &words)
{
    cout << "before eliminating duplicates: ";
    print(words);
    sort(words.begin(), words.end());
    cout << "after sorting: ";
    print(words);
    auto end_unique = unique(words.begin(), words.end());
    cout << "after the call to unique: ";
    print(words);
    words.erase(end_unique, words.end());
    cout << "after the call to erase";
    print(words);
}

void print(vector<string> &words)
{
    for (const auto &s : words) // read-only, so const; no need to copy the string, so &.
        cout << s << " ";
    cout << "\n";
}

string make_plural(int count, const string &word, const string &s)
{
    return count > 1 ? word + s : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDeups(words);
    stable_sort(words.begin(), words.end(),
                [] (const string &a, const string &b)
                   { return a.size() < b.size(); });
    auto wc = stable_partition(words.begin(), words.end(),
                               [sz] (const string &a)
                                    { return a.size() >= sz; });
    auto count = wc - words.begin();
    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer" << "\n";
    for_each(words.begin(), wc,
             [] (const string &s) { cout << s << " "; });
    cout << "\n";
}