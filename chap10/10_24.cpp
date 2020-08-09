#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::find_if;
using std::bind;
using namespace std::placeholders;

bool check_size(int, const string &);

int main()
{
    string s = "hello";
    vector<int> ivec = {0, 1, 3, 10, 100, 1};
    auto iter = find_if(ivec.cbegin(), ivec.cend(),
                        bind(check_size, _1, s));
    std::for_each(iter, ivec.cend(),
                  [] (const int i) { cout << i << " "; });
    cout << endl;
    return 0;
}

bool check_size(int i, const string &s)
{
    return i > s.size();
}