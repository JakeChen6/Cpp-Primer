#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec(10);
    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) // prefix
        ivec[ix] = cnt;
    for (auto i : ivec)
        cout << i << " ";

    // using postfix will incur unnecessary overhead of copying the undecremented values
    cout << endl;
    cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) // postfix
        ivec[ix] = cnt;
    for (auto i : ivec)
        cout << i << " ";
    return 0;
}
