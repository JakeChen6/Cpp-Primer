#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout; using std::endl;

vector<int>* alloc_vec();
void read_values(vector<int>*);
void print_values(vector<int>*);

int main()
{
    auto vec_p = alloc_vec();
    read_values(vec_p);
    print_values(vec_p);
    delete vec_p;
}

vector<int>* alloc_vec()
{
    auto p = new vector<int>;
    return p;
}

void read_values(vector<int>* vec_p)
{
    int i;
    while (cin >> i)
        vec_p->push_back(i);
}

void print_values(vector<int>* vec_p)
{
    for (const auto i : *vec_p)
        cout << i << " ";
    cout << endl;
}