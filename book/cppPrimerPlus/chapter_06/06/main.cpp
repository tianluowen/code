// date: 2019-12-04 18:31
// desc: 动态输入用户捐款金额 

#include <iostream>
#include <cctype>
#include <string>

// 定义结构体类型存放数据
struct INFO {
    double donation;
    std::string name;
};

const double granddonation = 10000;

int main(int argc, char *argv[])
{
    // 输入总共的数量
    int arraysize; 
    std::cout << "请输入捐献人个数: ";
    std::cin >> arraysize;

    // 定义结构体数组
    struct INFO *pinfo = new INFO [arraysize];

    // 循环依次接收
    for (int i = 0; i < arraysize; i++)
    {
        // 输入捐款者姓名
        std::cout << "请输入捐款者姓名: ";
        getchar();
        getline(std::cin, (pinfo + i)->name);
        /* std::cin >> (pinfo + i)->name; */

        // 输入捐款金额
        std::cout << "请输入" << (pinfo + i)->name << "捐款金额: ";
        std::cin >> (pinfo + i)->donation;
    }

    // 输出标题
    std::cout << "\nGrand Patrons\n";
    // 循环输出 捐款金额 大于 10000 的信息
    for (int i = 0; i < arraysize; i++)
    {
        // 判断大小
        if ((pinfo + i)->donation > granddonation)
        {
            // 输出
            std::cout << (pinfo + i)->name << " " << (pinfo + i)->donation << std::endl;
        }
    }

    // 输出标题
    std::cout << "\nPatrons\n";
    // 循环输出 捐款金额 不大于 10000 的信息
    for (int i = 0; i < arraysize; i++)
    {
        // 判断大小
        if ((pinfo + i)->donation <= granddonation)
        {
            // 输出
            std::cout << (pinfo + i)->name << " " << (pinfo + i)->donation << std::endl;
        }
    }

    return 0;
}
