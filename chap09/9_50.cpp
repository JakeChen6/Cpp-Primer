#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;

int main()
{
    vector<string> svec = {"11.1", "22.2", "33.3", "44.4"};

    double sum = 0.0;
    for (auto &s : svec)
        sum += std::stod(s);
    cout << "The sum is " << sum << "\n";
    return 0;
}