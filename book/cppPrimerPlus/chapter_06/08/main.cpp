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
    std::ifstream inFile;
    std::cout << "Enter name of test file: ";
    std::cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        std::cout << "Could not open the file " << filename << std::endl;
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    int countch = 0;
    inFile >> ch;
    while (inFile.good())
    {
        countch++; 
        inFile >> ch;
    }
    if (inFile.eof())
    {
        std::cout << "End of file readed.\n";
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
