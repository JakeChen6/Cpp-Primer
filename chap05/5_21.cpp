#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word, lastWord;
    bool occurTwice = false;
    while (cin >> word) {
        if (!isupper(word[0]))
            continue;
        if (word == lastWord) {
            cout << word << " occurs twice." << endl;
            occurTwice = true;
            break;
        }
        lastWord = word;
    }
    if (!occurTwice)
        cout << "no word was repeated." << endl;
    return 0;
}