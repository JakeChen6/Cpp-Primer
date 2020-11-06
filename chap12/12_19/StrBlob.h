#ifndef STRBLOB_H
#define STRBLOB_H

#include <vector>
#include <string>
#include <memory>

class StrBlobPtr;       // declaration

class StrBlob {
    friend class StrBlobPtr;
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    // add and remove elements
    void push_back(const std::string &t) { data->push_back(t); }
    void pop_back();
    // element access
    std::string& front();
    std::string& back();
    // return StrBlobPtr to the first and one past the last elements
    StrBlobPtr begin() { return StrBlobPtr(*this); }
    StrBlobPtr end() { return StrBlobPtr(*this, data->size()); }
private:
    std::shared_ptr<std::vector<std::string>> data;     // shared pointer to a vector
    void check(size_type i, const std::string &msg) const;
};

#endif