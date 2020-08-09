#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;

int main()
{
    int sz = 6;
    vector<string> svec = {"Hi", "helloFriend", "AlohaFriend"};
    auto count = std::count_if(svec.cbegin(), svec.cend(),
                               [sz] (const string &s) { return s.size() > sz; });
    cout << count << " word(s)" << "\n";
    return 0;
}