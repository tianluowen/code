// date: 2020-03-22
// desc: reference

#include <iostream>
           
using namespace std;
 
int main(void)
{
    int x = 0;
    int *p = &x;
    int& r = x;
    int x2 = 5;

    cout << "x = " << x << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "r = " << r << endl;
    cout << "x2 = " << x2 << endl;

    cout << endl;
    r = x2;         // r 不能重新代表其他东西，现在 r x2 都是 5 了
    cout << "r = " << r << endl;
    cout << "x = " << x << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}
