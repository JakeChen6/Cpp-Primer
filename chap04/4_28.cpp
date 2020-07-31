#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;

    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;

    // string or vector types all have size 24 bytes
    cout << "string: " << sizeof(string) << endl;
    cout << "char vector: " << sizeof(vector<char>) << endl;
    cout << "short vector: " << sizeof(vector<short>) << endl;
    cout << "int vector: " << sizeof(vector<int>) << endl;
    cout << "long vector: " << sizeof(vector<long>) << endl;
    cout << "long long vector: " << sizeof(vector<long long>) << endl;

    cout << "float vector: " << sizeof(vector<float>) << endl;
    cout << "double vector: " << sizeof(vector<double>) << endl;
    cout << "long double vector: " << sizeof(vector<long double>) << endl;

    int i = 1, &r = i, *p = &i;
    float f = 1, &fr = f, *fp = &f;
    double d = 1, &dr = d, *dp = &d;
    string s = "hello", &sr = s, *sp = &s;
    vector<int> ivec = {0, 1, 2}, &ivecr = ivec, *ivecp = &ivec;
    vector<float> fvec = {0, 1, 2}, &fvecr = fvec, *fvecp = &fvec;
    vector<double> dvec = {0, 1, 2}, &dvecr = dvec, *dvecp = &dvec;

    // a reference has the same size as its base type;
    // all pointer types have size 8 bytes (64 bits).
    cout << "int reference: " << sizeof(r) << endl;
    cout << "int pointer: " << sizeof(p) << endl;
    cout << "float reference: " << sizeof(fr) << endl;
    cout << "float pointer: " << sizeof(fp) << endl;
    cout << "double reference: " << sizeof(dr) << endl;
    cout << "double pointer: " << sizeof(dp) << endl;
    cout << "string reference: " << sizeof(sr) << endl;
    cout << "string pointer: " << sizeof(sp) << endl;
    cout << "int vector reference: " << sizeof(ivecr) << endl;
    cout << "int vector pointer: " << sizeof(ivecp) << endl;
    cout << "floar vector reference: " << sizeof(fvecr) << endl;
    cout << "float vector pointer: " << sizeof(fvecp) << endl;
    cout << "double vector reference: " << sizeof(dvecr) << endl;
    cout << "double vector pointer: " << sizeof(dvecp) << endl;



    return 0;
}