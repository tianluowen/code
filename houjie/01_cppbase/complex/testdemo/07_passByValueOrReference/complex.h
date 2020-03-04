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

    int print(const double& r, const double& i)
    // int print(double& r, double& i)
    // int print(double r, double i)
    // int print(const double r, const double i)
    {
        std::cout << "r = " << r << ", i = " << i << std::endl;

        int a = 10;

        return a;
    }
};

#endif
