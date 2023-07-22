// 时间：2019年10月21日10:49:18
// 目的：用户输入一个年龄，输出这个年龄包含多少个月份

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    int age = 0;
    int months = 0;

    cout << "请输入您的年龄：";
    cin  >> age;

    months = 12 * age;
    cout << age << "总共包含" << months << "个月份" << endl;

    return 0;
}
