#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <vector>
#include <string>
#include <set>
#include <map>
#include <fstream>
#include <memory>

class QueryResult;      // declaration

class TextQuery {
public:
    using line_nums = std::vector<std::string>::size_type;

    TextQuery() = default;
    TextQuery(std::ifstream&);
    QueryResult query(const std::string&);      // query will return a QueryResult object
private:
    std::shared_ptr<std::vector<std::string>> file;     // each line in the input file will be an element in this vector
    std::map<std::string,
             std::shared_ptr<std::set<line_nums>>> word_map;
};

#endif