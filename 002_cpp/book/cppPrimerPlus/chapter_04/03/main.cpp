// 时间：2019年11月14日12:05:29
// 目的：使用数组c字符串风格的方式拼接两个字符串

#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
    using namespace std;
    const int ArSize = 40;
    char surname[ArSize];
    char name[ArSize];

    cout << "Enter your first name: ";
    cin.getline(surname,  ArSize);
    cout << "Enter your last name: ";
    cin.getline(name, ArSize);

    strcat(name, ", ");
    strcat(name, surname);

    cout << "Here's the information in a single string: " << name << endl;

    return 0;
}
