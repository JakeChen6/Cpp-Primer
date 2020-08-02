#include <vector>
#include <list>

using std::vector;
using std::list;

bool func(vector<int> ivec, list<int> ilst)
{
    auto iVecCBeg = ivec.cbegin();
    auto iLstCBeg = ilst.cbegin();

    while (iVecCBeg != ivec.cend() && iLstCBeg != ilst.cend()) {
        if (*iVecCBeg != *iLstCBeg)
            return false;
        ++iVecCBeg;
        ++iLstCBeg;
    }
    if (iVecCBeg == ivec.cend() && iLstCBeg == ilst.cend())
        return true;
    else
        return false;
}