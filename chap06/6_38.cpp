#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

auto arrPtr(int i) -> decltype(odd) &;

int main()
{
    ;
}

auto arrPtr(int i) -> decltype(odd) &
{
    return (i % 2) ? odd : even;
}