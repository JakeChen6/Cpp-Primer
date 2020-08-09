#include <iostream>
#include <vector>
#include <algorithm>
#include "../Chapter_7/my_Sales_data.h"

using std::cout;
using std::vector;
using std::sort;

bool compareIsbn(const Sales_data &, const Sales_data &);

int main()
{
    Sales_data sd1("abc", 10, 100);
    Sales_data sd2("bcd", 10, 100);
    vector<Sales_data> salesVec = {sd2, sd1};
    sort(salesVec.begin(), salesVec.end(), compareIsbn);
    for (const auto &sd : salesVec)
        cout << sd.isbn() << " ";
    cout << "\n";
    return 0;
}

bool compareIsbn(const Sales_data &sd1, const Sales_data &sd2)
{
    return sd1.isbn() < sd2.isbn();
}