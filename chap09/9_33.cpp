#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    vector<int> ivec = {0, 1, 2, 3, 4, 5};
    auto it = ivec.begin();
    while (it != ivec.end()) {
        ++it;
        it = ivec.insert(it, 42);
        //ivec.insert(it, 42);
        // Iterator 'it' will become invalid after insert, thus if we don't
        // update the iterator, any usage of that iterator will have undefined
        // behaviors.
        ++it;
    }
    for (auto i : ivec)
        cout << i << " ";
    cout << "\n";
    return 0;
}