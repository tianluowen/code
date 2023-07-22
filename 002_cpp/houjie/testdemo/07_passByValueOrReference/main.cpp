// date: 2020-03-04
// desc: test pass by value or reference

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

    c1.real(6.5);
    c2.imag(5.6);
    pc3->imag(55.66);

    std::cout << "改值" << std::endl;
    std::cout << "c1: re = " << c1.real() << ", im = " << c1.imag() << std::endl;
    std::cout << "c2: re = " << c2.real() << ", im = " << c2.imag() << std::endl;
    std::cout << "c3: re = " << pc3->real() << ", im = " << pc3->imag() << std::endl;

    double r = 3;
    double i = 4;

    int a = c1.print(r, i);

    std::cout << std::endl << a << std::endl;

    a = c1.print(2.0, 2.0);

    std::cout << std::endl << a << std::endl;

    delete pc3;

    return 0;
}

// 结果: 使用下函数重载
