#include "QueryResult.h"

QueryResult::QueryResult(const std::string& s,
                         std::shared_ptr<std::vector<std::string>> file,
                         std::shared_ptr<std::set<line_num>> lines):
    sought(s), file(file), lines(lines) { }

std::ostream& print(std::ostream &os, const QueryResult &qr)
{
    os << qr.sought << " occurs " << qr.lines->size() << " times" << "\n";
    for (const auto line_num : *qr.lines) {
        os << "\t" << "(line " << (line_num+1) << ") " << (*qr.file)[line_num] << "\n";
    }
    return os;
}