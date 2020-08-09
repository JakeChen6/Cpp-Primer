#include <iostream>
#include <vector>
#include <string>
#include <functional>

using std::vector;
using std::string;
using std::bind;
using std::cout;
using namespace std::placeholders;

bool check_size(const string &, string::size_type);

int main()
{
    int sz = 6;
    vector<string> svec = {"Hi", "helloFriend", "AlohaFriend"};
    auto count = std::count_if(svec.cbegin(), svec.cend(),
                               bind(check_size, _1, sz));
    cout << count << " word(s)" << "\n";
    return 0;
}

bool check_size(const string &s, string::size_type sz)
{
    return s.size() > sz;
}