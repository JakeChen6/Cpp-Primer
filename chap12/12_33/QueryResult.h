#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <memory>
#include <vector>
#include <string>
#include <set>
#include <iostream>

class QueryResult {
    friend std::ostream& print(std::ostream &os, const QueryResult &qr);
public:
    using line_num = std::vector<std::string>::size_type;

    QueryResult() = default;
    QueryResult(const std::string&,
                std::shared_ptr<std::vector<std::string>>,
                std::shared_ptr<std::set<line_num>>);
    std::set<line_num>::const_iterator begin() const { return lines->cbegin(); }
    std::set<line_num>::const_iterator end() const { return lines->cend(); }
    std::shared_ptr<std::vector<std::string>> get_file() { return file; }
private:
    std::string sought;
    std::shared_ptr<std::vector<std::string>> file;
    std::shared_ptr<std::set<line_num>> lines;
};

#endif