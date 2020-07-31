#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;
    getline(cin, line);
    //string::size_type n = 0;
    //while (n < line.size())
    //    line[n++] = 'X';
    //cout << line << endl;

    for (string::size_type n = 0; n < line.size(); ++n)
        line[n] = 'X';
    cout << line << endl;
    return 0;
}