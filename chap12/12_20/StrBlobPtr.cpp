#include "StrBlobPtr.h"

using std::shared_ptr;
using std::vector;
using std::string;

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const
{
    auto ret = wptr.lock();   // is the vector still around?
    if (!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret; // otherwise, return a shared_ptr to the vector
}

string& StrBlobPtr::deref() const
{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];  // (*p) is the vector to which this object points
}

StrBlobPtr& StrBlobPtr::incr()
{
    // if curr already points past the end of the container, can't increment it
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

bool eq(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
	shared_ptr<vector<string>> l = lhs.wptr.lock(), r = rhs.wptr.lock();
	// if the underlying vector is the same 
	if (l == r) 
		// then they're equal if they're both null or 
		// if they point to the same element
		return (!r || lhs.curr == rhs.curr);
	else
		return false; // if they point to difference vectors, they're not equal
}

bool neq(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
	return !eq(lhs, rhs); 
}