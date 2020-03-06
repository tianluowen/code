// date: 2020-03-06
// desc: 使用操作符重载

#include <iostream>
#include "./complex.h"

int main(int argc, char *argv[])
{
    complex c1(2, 1);                       // 栈中分配
    const complex c2 = complex(2, 2);       // 栈中分配
    complex* pc3 = new complex(4);          // 堆中分配

    std::cout << "c1: re = " << c1.real() << ", im = " << c1.imag() << std::endl;
    std::cout << "c2: re = " << c2.real() << ", im = " << c2.imag() << std::endl;
    std::cout << "c3: re = " << pc3->real() << ", im = " << pc3->imag() << std::endl;

    c1 += c2;
    std::cout << "c1: re = " << c1.real() << ", im = " << c1.imag() << std::endl;

    delete pc3;

    return 0;
}

