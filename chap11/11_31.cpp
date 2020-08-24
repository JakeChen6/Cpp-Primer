#include <map>
using std::multimap;

#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    multimap<string, string> publications;
    string author, title;
    while (cin >> author)
        if (cin >> title)
            publications.insert({author, title});

    auto it = publications.find("Shakespeare");
    if (it != publications.end())
        publications.erase(it);

    author = "";
    for (const auto &p : publications) {
        if (p.first != author) {
            author = p.first;
            cout << "\n" << author << " - ";
        }
        cout << p.second << " ";
    }
    return 0;
}