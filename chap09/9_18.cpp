#include <iostream>
#include <deque>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::deque;
using std::string;

int main()
{
    deque<string> strdeq;
    string s;
    while (cin >> s)
        strdeq.push_back(s);

    for (auto it = strdeq.cbegin(); it != strdeq.cend(); ++it)
        cout << *it << " ";

    cout << endl;
    return 0;
}