// date: 2020-03-16
// desc: 测试析构函数

#include <iostream>
#include "./mystring.h"

int main(int argc, char *argv[])
{
    std::cout << "在堆中创创建" << std::endl;
    // String s1("Hello world!");                   // 栈中分配
    const String c2 = String("Hello");              // 栈中分配
    
    std::cout << std::endl;
    std::cout << "在栈中创创建" << std::endl;
    String* pc3 = new String("Hello !");            // 堆中分配

    std::cout << std::endl;

    std::cout << "释放栈中的对象" << std::endl;
    delete pc3;
    std::cout << "释放完成" << std::endl;

    std::cout << std::endl;

    return 0;
}

// 测试了 符号 重载成员函数 和 全局函数
