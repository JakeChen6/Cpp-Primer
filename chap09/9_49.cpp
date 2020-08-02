#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;

int main()
{
    string ascenders("df");
    string descenders("pg");

    string word;
    string longest_word;
    string::size_type len = 0;
    while (cin >> word) {
        if (word.find_first_of(ascenders) != string::npos ||
            word.find_first_of(descenders) != string::npos)
            continue;
        if (word.size() > len) {
            len = word.size();
            longest_word = word;
        }
    }

    cout << "The longest word is " << longest_word << "\n";
    return 0;
}