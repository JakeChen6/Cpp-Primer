#include <vector>
#include <iostream>

using std::cout;
using std::vector;

int main()
{
    vector<int> ivec;
    cout << "Size: " << ivec.size()
         << "\tCapacity: " << ivec.capacity() << "\n";

    ivec.push_back(1);
    cout << "Size: " << ivec.size()
         << "\tCapacity: " << ivec.capacity() << "\n";

    ivec.push_back(1);
    cout << "Size: " << ivec.size()
         << "\tCapacity: " << ivec.capacity() << "\n";

    ivec.push_back(1);
    cout << "Size: " << ivec.size()
         << "\tCapacity: " << ivec.capacity() << "\n";

    ivec.push_back(1);
    cout << "Size: " << ivec.size()
         << "\tCapacity: " << ivec.capacity() << "\n";

    ivec.push_back(1);
    ivec.push_back(1);
    cout << "Size: " << ivec.size()
         << "\tCapacity: " << ivec.capacity() << "\n";

    for (vector<int>::size_type ix = 0; ix != 100; ++ix)
        ivec.push_back(1);
    cout << "Size: " << ivec.size()
         << "\tCapacity: " << ivec.capacity() << "\n";

    ivec.shrink_to_fit();
    cout << "Size: " << ivec.size()
         << "\tCapacity: " << ivec.capacity() << "\n";

    return 0;
}