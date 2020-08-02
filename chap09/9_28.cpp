#include <forward_list>
#include <string>
#include <iostream>

using std::forward_list;
using std::string;
using std::cout;

void func(forward_list<string> &, const string &, const string &);

int main()
{
    forward_list<string> str_flst = {"Hello", "World", "and", "You"};
    func(str_flst, "and", "Dear");
    for (auto &s : str_flst)
        cout << s << "\n";
    return 0;
}

void func(forward_list<string> &flst, const string &s1, const string &s2)
{
    auto prev = flst.before_begin();    // for inserting at the end if s1 is not found.
    auto curr = flst.begin();
    while (curr != flst.end()) {
        if (*curr == s1) {
            curr = flst.insert_after(curr, s2);
            ++curr;
            return;
        }
        else {
            prev = curr;
            ++curr;
        }
    }
    flst.insert_after(prev, s2);
}