// date: 2020-03-01
// desc: 测试 inline

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
//       内联函数，只需要在 函数声明 或者 函数定义处加上 inline 关键字就可以
//       或者两者都加上都可以
