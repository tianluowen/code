// date: 2019-12-05 20:02
// desc: 读取一个测试文件，统计这个文件有多少个字符

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

const int SIZE = 60;

int main(int argc, char *argv[])
{
    char filename[SIZE];
    int countFlag = 1;

    // 接收文件名
    std::ifstream inFile;
    std::cout << "请输入要测试的文件名: ";
    std::cin.getline(filename, SIZE);

    // 输入统计方式
    do{
        std::cout << "请输入统计方式: 0 - 不统计空格、回车等空白符\n";
        std::cout << "              : 1 - 统计空格、回车等空白符\n";
        std::cout << "              : ___\b\b";
        std::cin >> countFlag;
    }
    while (countFlag != 0 && countFlag != 1);

    // 打开文件
    inFile.open(filename);
    if (!inFile.is_open())
    {
        std::cout << "Could not open the file " << filename << std::endl;
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    // 统计字符
    char ch;
    int countch = 0;
    if (countFlag == 2)
    {
        inFile.get(ch);
    }
    else if (countFlag == 1)
    {
        inFile >> ch;
    }
    else 
    {
        std::cout << "输入统计方式错误\n";
        return 0;
    }
        
    while (inFile.good())
    {
        countch++; 
        if (countFlag == 2)
        {
            inFile.get(ch);
        }
        else if (countFlag == 1)
        {
            inFile >> ch;
        }
        else 
        {
            std::cout << "输入统计方式错误\n";
            return 0;
        }
    }
    if (inFile.eof())
    {
        std::cout << "\nEnd of file readed.\n";
        std::cout << filename << " 总共有 " << countch << " 个字符.\n";
    }
    else if (inFile.fail())
    {
        std::cout << "Input terminated by test file mismatch.\n";
    }
    else
    {
        std::cout << "Input terminated for unknown reason.\n";
    }

    return 0;
}
