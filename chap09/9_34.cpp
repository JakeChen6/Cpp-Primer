#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    vector<int> ivec = {0, 1, 2, 3, 4};
    auto iter = ivec.begin();
    while (iter != ivec.end()) {    // if the container contains any odd values,
                                    // the loop will continue infinitely.
        if (*iter % 2)
            iter = ivec.insert(iter, *iter);
        ++iter;
    }
}