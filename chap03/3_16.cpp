#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

/* Write a program to print the size and contents
 * of the vectors from exercise 3.13.
 */

int main()
{
    vector<int> v1;
    vector<int> v2 (10);
    vector<int> v3 (10, 42);
    vector<int> v4 {10};
    vector<int> v5 {10, 42};
    vector<string> v6 {10};
    vector<string> v7 {10, "hi"};

    cout << v1.size() << endl;  // 0
    cout << v2.size() << endl;  // ten 0
    cout << v3.size() << endl;  // ten 42
    cout << v4.size() << endl;  // one 10
    cout << v5.size() << endl;  // two, 10 and 42
    cout << v6.size() << endl;  // ten empty strings
    cout << v7.size() << endl;  // ten "hi"

    for (auto elm : v1)
        cout << elm << " " << endl;
    for (auto elm : v2)
        cout << elm << " " << endl;
    for (auto elm : v3)
        cout << elm << " " << endl;
    for (auto elm : v4)
        cout << elm << " " << endl;
    for (auto elm : v5)
        cout << elm << " " << endl;
    for (auto elm : v6)
        cout << elm << " " << endl;
    for (auto elm : v7)
        cout << elm << " " << endl;

}