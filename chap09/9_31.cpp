#include <list>
#include <forward_list>
#include <iostream>

using std::list;
using std::forward_list;
using std::cout;

void silly_loop1(list<int> &);
void silly_loop2(forward_list<int> &);

void silly_loop1(list<int> &ilst)
{
    auto iter = ilst.begin();
    while (iter != ilst.end()) {
        if (*iter % 2) {
            iter = ilst.insert(iter, *iter);
            ++iter, ++iter;
            // iter += 2;   // Error: list does not support iterator arithmetic.
        }
        else
            iter = ilst.erase(iter);
    }
}

void silly_loop2(forward_list<int> &flst)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end()) {
        if (*curr % 2) {
            prev = flst.insert_after(prev, *curr);
            ++curr;     // curr is still valid
            ++prev;
        }
        else
            curr = flst.erase_after(prev);
    }
}

int main()
{
    list<int> ilst = {0,1,2,3,4,5,6,7,8,9};
    forward_list<int> iflst (ilst.cbegin(), ilst.cend());

    silly_loop1(ilst);
    for (auto i : ilst)
        cout << i << " ";
    cout << "\n";

    silly_loop2(iflst);
    for (auto i : iflst)
        cout << i << " ";
    cout << "\n";

    return 0;    
}