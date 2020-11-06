#include "TextQuery.h"
#include "QueryResult.h"

#include <sstream>

using std::vector;
using std::string;
using std::istringstream;
using std::set;
using std::shared_ptr;

TextQuery::TextQuery(std::ifstream &infile)
{
    string line;
    string word;
    line_nums line_num = 0;
    while (getline(infile, line)) {
        file.push_back(line);     // each line is an element in the vector
        istringstream iss(line);
        while (iss >> word) {
            auto &lines = word_map[word];   // if word is not in word_map yet, subscripting adds a new entry
            if (!lines)     // the pointer is null the first time we see word
                lines.reset(new set<line_nums>);    // dynamically allocate a new set
            lines->insert(line_num);
        }
        ++line_num;
    }
}

QueryResult TextQuery::query(const string &s) const
{
    // we'll return a pointer to this set if we don't find sought
    static shared_ptr<set<line_nums>> nodata(new set<line_nums>);
    auto loc = word_map.find(s);
    if (loc == word_map.end())
        return QueryResult(s, file.data, nodata);
    else
        return QueryResult(s, file.data, loc->second);   // no need to call word_map[s] as loc is already found
}