#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H

#include "StrBlob.h"
#include <memory>
#include <vector>
#include <string>

class ConstStrBlobPtr {
public:
    ConstStrBlobPtr(): curr(0) { }       // wptr is implicitly initialized to null
    ConstStrBlobPtr(const StrBlob &a, size_t sz = 0):
                wptr(a.data), curr(sz) { }
    const std::string& deref() const;   // we should fetch const string from a vector pointed by a const shared_ptr
    ConstStrBlobPtr& incr();
private:
    // check returns a shared_ptr to the vector if the check succeeds
    std::shared_ptr<std::vector<std::string>>
        check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};

#endif