// desc: 复数测试类的头文件

// 防御式声明
#ifndef __COMPLEX__
#define __COMPLEX__

#include <iostream>

class complex
{
private:
    double re, im;

public:
    complex (double r = 0, double i = 0)
        : re(r), im(i)
    { }

    // 读值
    double real()
    const
    {
        std::cout << "使用加 const 的函数 ";
        return re;
    }
    double real()
    {
        std::cout << "使用不加 const 的函数 ";
        return re;
    }

    double imag()
    const
    {
        std::cout << "使用加 const 的函数 ";
        return im;
    }
    double imag()
    {
        std::cout << "使用不加 const 的函数 ";
        return im;
    }
};

#endif
