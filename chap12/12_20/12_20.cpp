#include "StrBlobPtr.h"

#include <iostream>
using std::cin; using std::cout;

#include <fstream>
using std::ifstream;

#include <sstream>
using std::getline;

#include <string>
using std::string;

#include <stdexcept>
using std::runtime_error;

bool neq(const StrBlobPtr&, const StrBlobPtr&);

int main(int argc, char **argv)
{
    if (argc != 2)
        throw runtime_error("wrong number of arguments");

    ifstream input(argv[1]);
    if (!input)
        throw runtime_error("no input file");

    string line;
    StrBlob strblob;
    while (getline(input, line))
        strblob.push_back(line);

    for (StrBlobPtr it = strblob.begin(); neq(it, strblob.end()); it.incr())
		cout << it.deref() << "\n";
    return 0;
}