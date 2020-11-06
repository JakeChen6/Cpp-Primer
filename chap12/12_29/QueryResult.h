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
private:
    std::string sought;
    std::shared_ptr<std::vector<std::string>> file;
    std::shared_ptr<std::set<line_num>> lines;
};

#endif