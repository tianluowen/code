// 时间：2019年11月13日21:13:58
// 目的：修改程序清单，使用 string 类而不是 string数组

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
