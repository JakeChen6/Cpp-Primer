#include <memory>
using std::unique_ptr;

int main()
{
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    typedef unique_ptr<int> IntP;

    // cannot initialize a unique_ptr from non-pointer types.
    //IntP p0(ix);

    // we should pass a pointer returned by new.
    //IntP p1(pi);

    // ok
    IntP p2(pi2);

    // we should pass a pointer returned by new.
    //IntP p3(&ix);

    // ok
    IntP p4(new int(2048));

    // error-prone, p2 and p5 are independent unique_ptrs, when either one is destroyed,
    // the other one becomes a dangling pointer.
    IntP p5(p2.get());
}