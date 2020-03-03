// date: 2020-03-01
// desc: 测试类的 初始化语法

#include <iostream>
#include "./complex.h"

int main(int argc, char *argv[])
{
    complex c1(2, 1);               // 栈中分配
    complex c2 = complex(2, 2);     // 栈中分配
    complex* pc3 = new complex(4);  // 堆中分配

    std::cout << "c1: re = " << c1.real() << ", im = " << c1.imag() << std::endl;
    std::cout << "c2: re = " << c2.real() << ", im = " << c2.imag() << std::endl;
    std::cout << "c3: re = " << pc3->real() << ", im = " << pc3->imag() << std::endl;

    c1.print();
    pc3->print();

    delete pc3;

    return 0;
}

// 结果: 内联函数如何使用
