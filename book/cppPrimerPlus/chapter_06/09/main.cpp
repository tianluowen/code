// date: 2019-12-04 18:31
// desc: 动态输入用户捐款金额 

#include <iostream>
#include <fstream>    
#include <sstream>
#include <cctype>
#include <string>

// 定义结构体类型存放数据
struct INFO {
    double donation;
    std::string name;
};

// 定义文件名最大长度
const int SIZE = 60;

// 捐款金额的分界值
const double granddonation = 10000;

int main(int argc, char *argv[])
{
    // 输入总共的数量
    int arraysize; 
    char filename[SIZE];
    int countFlag = 1;

    // 接收文件名
    std::ifstream inFile;
    std::cout << "请输入存放捐款人信息的文件名: ";
    std::cin.getline(filename, SIZE);

    // 打开文件
    inFile.open(filename);
    if (!inFile.is_open())
    {
        std::cout << "Could not open the file " << filename << std::endl;
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    std::string strtemp;
    getline(inFile, strtemp);
    std::istringstream(strtemp) >> arraysize;
    std::cout << arraysize;
    
    // 定义结构体数组
    struct INFO *pinfo = new INFO [arraysize];

    // 循环依次接收
    for (int i = 0; i < arraysize; i++)
    {
        // 输入捐款者姓名
        getline(inFile, (pinfo +i)->name);

        // 输入捐款金额
        getline(inFile, strtemp);
        std::istringstream(strtemp) >> (pinfo + i)->donation;
    }

    // 输出标题
    std::cout << "\nGrand Patrons\n";
    // 循环输出 捐款金额 大于 10000 的信息
    for (int i = 0; i < arraysize; i++)
    {
        // 判断大小
        if ((pinfo + i)->donation > granddonation);
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

