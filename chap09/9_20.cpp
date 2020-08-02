#include <list>
#include <deque>
#include <iostream>

using std::cout;
using std::list;
using std::deque;

int main()
{
    list<int> ilst = {0, 1, 2, 3, 4, 5};
    deque<int> ideq1, ideq2;
    for (auto i : ilst) {
        if (i % 2)
            ideq2.push_back(i);
        else
            ideq1.push_back(i);
    }

    for (auto i : ideq1)
        cout << i << " ";
    cout << "\n";
    for (auto i : ideq2)
        cout << i << " ";
    cout << "\n";
    return 0;
}