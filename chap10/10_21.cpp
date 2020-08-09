#include <iostream>

using std::cout;

int main()
{
    int i = 10;
    auto f = [i] () mutable -> bool { if (i > 0) return --i, false; else return true; };
    while (true) {
        if (f())
            break;
        cout << i-- << " ";
    }
    cout << "\n";
    return 0;
}