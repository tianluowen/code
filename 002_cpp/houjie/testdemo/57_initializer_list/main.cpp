// date: 2020-04-14
// desc: initializer_list<>

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    // 这两者却别，第一个调用多次构造函数
    // 第二个调用参数为 initializer_list 的构造函数
    vector<int> v1  { 2, 4, 5, 13, 69, 83, 50 };
    vector<int> v2 ({ 2, 5, 7, 13, 69, 83, 50 });
    vector<int> v3;

    for (auto i : v1)
        cout << i << "\t";
    cout << endl;

    for (auto i : v2)
        cout << i << "\t";
    cout << endl;

    v3 = { 2, 4, 5, 13, 69, 83, 50 };
    v3.insert(v3.begin()+2, {0, 1, 2, 3, 4});
    // 2	4	0	1	2	3	4	5	13	69	83	50
    for (auto i : v3)
        cout << i << "\t";
    cout << endl;

    // 调用的算法 形参类型都是 initializer_list
    cout << max( { string("Ace"), string("Stacy"), string("Sabrina"), string("Barkley") } ); // Stacy
    cout << endl;
    cout << min( { string("Ace"), string("Stacy"), string("Sabrina"), string("Barkley") } ); // Ace
    cout << endl;
    cout << max({ 54, 16, 48, 5}); // 54
    cout << endl;
    cout << min({ 54, 16, 48, 5}); // 16
    cout << endl;

    return 0;
}
