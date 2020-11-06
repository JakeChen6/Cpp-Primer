#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <memory>
using std::shared_ptr; using std::make_shared;

shared_ptr<vector<int>> alloc_vec();
void read_values(shared_ptr<vector<int>>);
void print_values(shared_ptr<vector<int>>);

int main()
{
    auto vec_p = alloc_vec();
    read_values(vec_p);
    print_values(vec_p);
}

shared_ptr<vector<int>> alloc_vec()
{
    auto p = make_shared<vector<int>>();
    return p;
}

void read_values(shared_ptr<vector<int>> p)
{
    int i;
    while (cin >> i)
        p->push_back(i);
}

void print_values(shared_ptr<vector<int>> p)
{
    for (const auto i : *p)
        cout << i << " ";
    cout << endl;
}