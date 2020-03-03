// date: 2020-03-01
// desc: 负数测试类的头文件

// 防御式声明
#ifndef __complex__
#define __complex__

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
        return re;
    }
    double imag()
    const
    {
        return im;
    }

    // 改值
    void real(double r)
    {
        re = r;
    }
    void imag(double i)
    {
        im = i;
    }

    // test inline
    inline void print(void);
};

void complex::print(void)
{
    std::cout << "Test inline" << std::endl;
}

#endif


