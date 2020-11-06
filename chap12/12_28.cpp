#include <vector>
using std::vector;

#include <string>
using std::string;

#include <set>
using std::set;

#include <map>
using std::map;

#include <fstream>
using std::ifstream;

#include <sstream>
using std::istringstream;

#include <stdexcept>
using std::runtime_error;

#include <iostream>
using std::cin; using std::cout;

typedef vector<string>::size_type line_num;

void read_file(ifstream&, vector<string>&, map<string, set<line_num>>&);
void query(const string&, vector<string>&, map<string, set<line_num>>&);

int main(int argc, char **argv)
{
    if (argc != 2)
        throw runtime_error("wrong number of arguments");

    ifstream infile(argv[1]);
    if (!infile)
        throw runtime_error("no input file");

    vector<string> file;
    map<string, set<line_num>> word_map;
    read_file(infile, file, word_map);

    string sought;
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        if (!(cin >> sought) || sought == "q")
            break;
        query(sought, file, word_map);
    }
    return 0;
}

void read_file(ifstream &infile, vector<string> &file, map<string, set<line_num>> &word_map)
{
    string line;
    string word;
    line_num line_no = 1;
    while (getline(infile, line)) {
        file.push_back(line);
        istringstream iss(line);
        while (iss >> word)
            word_map[word].insert(line_no);     // if 'word' is not in 'word_map' yet, a new set is created.
        ++line_no;
    }
}

void query(const string &sought, vector<string> &file, map<string, set<line_num>> &word_map)
{
    auto loc = word_map.find(sought);       // need to check whether 'sought' is in 'word_map'
    if (loc == word_map.end())
        cout << sought << " not found" << "\n";
    else {
        cout << sought << " occurs " << loc->second.size()
             << ((loc->second.size() > 1) ? " times" : " time") << "\n";
        for (const auto line_no : loc->second)
            cout << "\t" << "(line " << line_no << ")" << file[line_no-1] << "\n";
    }
}