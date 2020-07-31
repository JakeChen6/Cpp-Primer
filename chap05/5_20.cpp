#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string word, lastWord;
    bool occurTwice = false;
    while (cin >> word) {
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