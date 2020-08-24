#include <map>
using std::map;

#include <utility>
using std::pair;

#include <string>
using std::string;

#include <vector>
using std::vector;

// argument
pair<string, vector<int>> arg;

// return
pair<map<string, vector<int>>::iterator, bool> ret;

int main()
{
    map<string, vector<int>> aMap;
    aMap.insert(arg);
    return 0;
}