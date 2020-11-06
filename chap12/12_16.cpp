#include <memory>
using std::unique_ptr;

int main()
{
    unique_ptr<double> p1 (new double(3.14));
    //unique_ptr<double> p2(p1);
    unique_ptr<double> p3;
    p3 = p1;
}