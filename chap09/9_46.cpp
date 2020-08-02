#include <string>
#include <iostream>

using std::string;
using std::cout;

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
    s.insert(0, prefix);            // can use string as argument
    s.insert(s.size(), suffix);     // can use string as argument
    return s;
}