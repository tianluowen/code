// date: 2020-03-22
// desc: reference

#include <iostream>
           
using namespace std;

typedef struct Stag
{
    int a;
    int b;
    int c;
    int d;
} S;
 
int main(void)
{
    double x = 0;
    double* p = &x;  // p 指向 x, p 的值是 x 的地址
    double& r = x;   // r 代表 x，现在 r x 都是 0

    // 64 位系统下测试
    cout << sizeof(x) << endl;   // 8
    cout << sizeof(p) << endl;   // 8
    cout << sizeof(r) << endl;   // 8
    cout << p << endl;           // 0x7ffe355f1920
    cout << *p << endl;          // 0
    cout << x << endl;           // 0
    cout << r << endl;           // 0
    cout << &x << endl;          // 0x7ffe355f1920
    cout << &r << endl;          // 0x7ffe355f1920
    cout << endl;

    S s;
    S& rs = s;
    cout << sizeof(s) << endl;   // 16
    cout << sizeof(rs) << endl;  // 16
    cout << &s << endl;          // 0x7ffe355f1900
    cout << &rs << endl;         // 0x7ffe355f1900

    return 0;
}
