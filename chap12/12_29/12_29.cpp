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

// The two versions are identical except the order: when to test the condition.
// I personally prefer the while (true) version to the do while version because
// the former makes it explicit that the exit condition will be tested inside the block.
// As for the do while version, not until the last line do we konw that the test condition
// is always 'true'.
void runQueries(ifstream &infile)
{
    // infile is an ifstream that is the file we want to query
    TextQuery tq(infile);   // store the file and build the query map
    // iterate with the user: prompt for a word to find and print results
    do {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q")    // stop if we hit end-of-file on the input or if a 'q' is entered
            break;
        // run the query and print the results
        print(cout, tq.query(s)) << endl;
    } while (true);
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