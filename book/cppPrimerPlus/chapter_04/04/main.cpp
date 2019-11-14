// 时间：2019-11-14 20:34
// 目的：使用string类拼接两个字符串

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    using namespace std;
    string surname;
    string name;

    cout << "Enter your first name: ";
    getline(cin, surname);
    cout << "Enter your last name: ";
    getline(cin, name);

    name += ", ";
    name += surname;

    cout << "Here's the information in a single string: " << name << endl;

    return 0;
}
