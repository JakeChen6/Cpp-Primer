#include <unordered_map>
using std::unordered_map;

#include <string>
using std::string;

#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <fstream>
using std::ifstream;

#include <sstream>
using std::istringstream;

#include <istream>
using std::getline;

#include <stdexcept>
using std::runtime_error;

void word_count()
{
    unordered_map<string, size_t> word_count;
    string word;
    while (cin >> word)
        ++word_count[word];
    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << endl;
}

const string &
transform(const string &s, const unordered_map<string, string> &m)
{
    auto map_it = m.find(s);
    if (map_it != m.end())
        return map_it->second;
    else
        return s;
}

unordered_map<string, string> buildMap(ifstream &map_file)
{
    unordered_map<string, string> trans_map;
    string key;
    string value;
    while (map_file >> key && getline(map_file, value))
        if (value.size() > 1)
            trans_map[key] = value.substr(1);
        else
            throw runtime_error("no rule for " + key);
    return trans_map;
}

void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file);
    string text;
    while (getline(input, text)) {
        istringstream stream(text);
        string word;
        bool firstword = true;
        while (stream >> word) {
            if (firstword)
                firstword = false;
            else
                cout << " ";
            cout << transform(word, trans_map);
        }
        cout << endl;
    }
}

int main(int argc, char **argv)
{
    //word_count();

    // open and check both files
    if (argc != 3)
        throw runtime_error("wrong number of arguments");

    ifstream map_file(argv[1]); // open transformation file 
    if (!map_file)              // check that open succeeded
        throw runtime_error("no transformation file");
    
    ifstream input(argv[2]);    // open file of text to transform
    if (!input)                 // check that open succeeded
        throw runtime_error("no input file");

	word_transform(map_file, input);

    return 0;  // exiting main will automatically close the files
}