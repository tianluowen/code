// 时间：2019年11月13日21:13:58
// 目的：修改程序清单，使用 string 类而不是 string数组

#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char *argv[])
{
    using namespace std;

    const int ArSize = 20;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    /* cin >> name; */
    /* cin.getline(name, ArSize); */
    gitline(cin, name);
    /* gets(name); */
    cout << "Enter your favorite dessert:\n";
    /* cin >> dessert; */
    /* cin.getline(dessert, ArSize); */
    gitline(cin, dessert);
    /* gets(dessert); */

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
