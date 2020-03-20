// date: 2020-03-06
// desc: 使用操作符重载

#include <iostream>
#include "./complex.h"

int main(int argc, char *argv[])
{
    complex c1(2, 1);                       // 栈中分配
    const complex c2 = complex(2, 2);       // 栈中分配
    complex* pc3 = new complex(4);          // 堆中分配

    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;
    std::cout << "c3 = " << *pc3 << std::endl;
    std::cout << "c3 = " << pc3 << std::endl;


    delete pc3;

    return 0;
}

