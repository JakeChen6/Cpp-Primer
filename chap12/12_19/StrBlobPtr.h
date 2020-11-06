#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H

#include "StrBlob.h"
#include <memory>
#include <vector>
#include <string>

class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) { }       // wptr is implicitly initialized to null
    StrBlobPtr(StrBlob &a, size_t sz = 0):
            wptr(a.data), curr(sz) { }
    std::string& deref() const;
    StrBlobPtr& incr();
private:
    // check returns a shared_ptr to the vector if the check succeeds
    std::shared_ptr<std::vector<std::string>>
        check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};

#endif