#include "StrBlob.h"
#include "StrBlobPtr.h"

#include <stdexcept>

using std::make_shared;
using std::vector;
using std::string;
using std::initializer_list;

StrBlob::StrBlob(): data(make_shared<vector<string>>()) { }     // the default constructor allocates an empty vector
StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il)) { }    // il is passed to the corresponding
                                                                                            // vector constructor
void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size())
        throw std::out_of_range(msg);
}

string& StrBlob::front()
{
    // if the vector is empty, check will throw
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

StrBlobPtr StrBlob::begin()
{
    return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
    return StrBlobPtr(*this, data->size());
}