#include <map>
using std::map;

#include <string>
using std::string;

int main()
{
    map<string, size_t> word_count;
    map<string, size_t>::const_iterator map_it = word_count.cbegin();
}