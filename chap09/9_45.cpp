#include <string>
#include <iostream>

using std::string;
using std::cout;

// return a new string, so don't use string reference.
string replace(string, const string &, const string &);

int main()
{
    string s = "Tom";
    s = replace(s, "Mr.", " Jr.");
    cout << s << "\n";
    return 0;
}

string replace(string s, const string &prefix, const string &suffix)
{
    s.insert(s.begin(), prefix.cbegin(), prefix.cend());        // cannot use string as argument
    s.append(suffix);
    return s;
}