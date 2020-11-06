#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include "StrBlob.h"

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
    QueryResult query(const std::string&) const;      // query will return a QueryResult object
private:
    StrBlob file;
    std::map<std::string,
             std::shared_ptr<std::set<line_nums>>> word_map;
};

#endif