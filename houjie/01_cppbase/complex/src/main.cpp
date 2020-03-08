// date: 2020-03-08
// desc: 测试 complex.h 

#include <iostream>
#include "../inc/complex.h"

using namespace testComplex;

int main(void)
{
    // 测试创建类对象
    complex c1(2, 1);               // 栈中分配 这种方式参数不可以为空
    complex c2 = complex(2, 2);     // 栈中分配
    complex* pc3 = new complex(4);  // 堆中分配
    complex c4 = complex();
    complex c5(1);
    // complex c6();
    complex c7;

    // 测试输出对象 << 操作符重载效果
    std::cout << "// test 创建类对象 & <<" << std::endl;
    std::cout << "complex c1(2, 1)              c1 = " << c1 << std::endl;
    std::cout << "complex c2 = complex(2, 2)    c2 = " << c2 << std::endl;
    std::cout << "complex* c3 = new complex(4)  c3 = " << *pc3 << std::endl;
    std::cout << "complex c4 = complex()        c4 = " << c4 << std::endl;
    std::cout << "complex c5(1)                 c5 = " << c5 << std::endl;
    // std::cout << "complex c6()                  c6 = " << c6 << std::endl;
    std::cout << "complex c7                    c7 = " << c7 << std::endl;

    // test +=
    std::cout << std::endl << "// test +=" << std::endl;
    std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
    c1 += c2;
    std::cout << "c1 += c2, c1 = " << c1 << std::endl;
    std::cout << "c3 = " << *pc3 << ", c1 = " << c1 << std::endl;
    *pc3 += c1;
    std::cout << "c3 += c1, c3 = " << *pc3 << std::endl;
    std::cout << "c1 = " << c1 << std::endl;
    c1 += 10;
    std::cout << "c1 += 10, c1 = " << c1 << std::endl;
    std::cout << "c1 = " << c1 << ", c5 = " << c5 << std::endl;
    c5 += c1 += 10;
    std::cout << "c5 += c1 += 10, c5 = " << c5 << " , c1 = " << c1 << std::endl;

    // test -=
    std::cout << std::endl << "// test -=" << std::endl;
    std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
    c1 -= c2;
    std::cout << "c1 -= c2, c1 = " << c1 << std::endl;
    std::cout << "c3 = " << *pc3 << ", c1 = " << c1 << std::endl;
    *pc3 -= c1;
    std::cout << "c3 -= c1, c3 = " << *pc3 << std::endl;
    std::cout << "c1 = " << c1 << std::endl;
    c1 -= 10;
    std::cout << "c1 -= 10, c1 = " << c1 << std::endl;
    std::cout << "c5 = " << c5 << ", c1 = " << c1 << std::endl;
    c5 -= c1 -= 10;
    std::cout << "c5 -= c1 -= 10, c5 = " << c5 << " , c1 = " << c1 << std::endl;

    // test +
    std::cout << std::endl << "// test +" << std::endl;
    c4 = c1 + c2;
    std::cout << "c4 = c1 + c2, c1 = " << c1 << ", c2 = " << c2 << ", c4 =" << c4 << std::endl;
    c4 = c4 + 7;
    std::cout << "c4 = c4 + 7, c4 = " << c4 << std::endl;
    c5 = 5 + c4;
    std::cout << "c5 = 5 + c4, c5 = " << c5 << std::endl;
    c5 = 7 + c5 + 6;
    std::cout << "c5 = 7 + c5 + 6, c5 = " << c5 << std::endl;

    // test /
    std::cout << std::endl << "// test /" << std::endl;
    c5 = c5 / 2;
    std::cout << "c5 = c5 / 2, c5 = " << c5 << std::endl;
    c5 = c5 / c4;
    std::cout << "c5 = c5 / c4, c4 = " << c4 << ", c5 = " << c5 << std::endl;
    c1 = 3 / c2;
    std::cout << "c1 = 3 / c2, c2 = " << c2 << ", c1 = " << c1 << std::endl;

    // test *
    std::cout << std::endl << "// test *" << std::endl;
    c1 = c1 * c2;
    std::cout << "c1 = c1 * c2, c2 = " << c2 << ", c1 = " << c1 << std::endl;
    c5 = c5 * c4;
    std::cout << "c5 = c5 * c4, c4 = " << c4 << ", c5 = " << c5 << std::endl;
    c5 = 3 * c5 * c4 * 2;
    std::cout << "c5 = 3 * c5 * c4 * 2, c5 = " << c5 << std::endl;
    

    
    delete pc3;

    return 0;
}
