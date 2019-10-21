// 时间：2019年10月17日15:20:32
// 目的：编写 一个程序 实习对自己姓名和地址的输入和输出

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    // 定义变量
    string selfAddr;
    string selfName;

    // 提示 接受信息
    cout << "请输入您的姓名：";
    cin >> selfName;
    cout << "请输入您的地址：";
    cin >> selfAddr;

    // 输出信息
    cout << "\n";
    cout << "您的姓名是：" + selfName << endl;
    cout << "您的地址是：" + selfAddr << endl;

    return 0;
}
