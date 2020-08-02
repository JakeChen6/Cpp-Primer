#include <string>
#include <iostream>

using std::string;
using std::cout;

void replace(string &, const string &, const string &);

int main()
{
    string s = "tho it is hard, thru teamwork we can make it!";
    replace(s, "tho", "though");
    replace(s, "thru", "through");
    cout << s << "\n";
    return 0;
}

void replace(string &s, const string &oldVal, const string &newVal)
{
    auto size = oldVal.size();
    auto iter = s.begin();
    while (iter != s.end()) {
        auto pos = iter - s.begin();
        if (s.substr(pos, size) == oldVal) {
            s.erase(pos, size);
            s.insert(pos, newVal);
            iter = s.begin() + pos + newVal.size() - size;      // update the iterator
        }
        else
            ++iter;
    }
}