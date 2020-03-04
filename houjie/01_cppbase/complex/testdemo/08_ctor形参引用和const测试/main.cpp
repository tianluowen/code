// date: 2020-03-04
// desc: test pass by value or reference

#include <iostream>
#include "./complex.h"

int main(int argc, char *argv[])
{
    double r = 3;
    double i = 4;

    complex c1(2, 1);               // 栈中分配
    // complex c2 = complex(r, i);     // 栈中分配
    complex* pc3 = new complex(4);  // 堆中分配

    std::cout << "c1: re = " << c1.real() << ", im = " << c1.imag() << std::endl;
    // std::cout << "c2: re = " << c2.real() << ", im = " << c2.imag() << std::endl;
    std::cout << "c3: re = " << pc3->real() << ", im = " << pc3->imag() << std::endl;

    delete pc3;

    return 0;
}

// 结果: 形参的 const 不能进行函数重载，会有语法有问题
//       & 引用符号，可以进行函数重载，但是，会有问题，使用的时候，会提示不明确
