#include "TextQuery.h"
#include "QueryResult.h"

#include <fstream>
using std::ifstream;

#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <string>
using std::string;

#include <stdexcept>
using std::runtime_error;

void runQueries(ifstream &infile)
{
    // infile is an ifstream that is the file we want to query
    TextQuery tq(infile);   // store the file and build the query map
    // iterate with the user: prompt for a word to find and print results
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q")    // stop if we hit end-of-file on the input or if a 'q' is entered
            break;
        // run the query and print the results
        print(cout, tq.query(s)) << endl;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        throw runtime_error("wrong number of arguments");

    ifstream input(argv[1]);
    if (!input)
        throw runtime_error("no input file");

    runQueries(input);
    return 0;
}