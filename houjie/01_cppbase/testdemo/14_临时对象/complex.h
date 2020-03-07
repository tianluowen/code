// desc: 复数测试类的头文件

// 防御式声明
#ifndef __COMPLEX__
#define __COMPLEX__

#include <iostream>

using namespace std;

class complex
{
private:
    double re, im;

public:
    complex (double r = 0, double i = 0)
        : re(r), im(i)
    { }
    
    complex operator + (const complex& y)
    {
        // 临时对象的语法 没有对象名
        return complex(this->real() + y.real(), this->imag() + y.imag());
    }
    
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

};

ostream& operator << (ostream& os, const complex& x)
{
    return os << '(' << x.real() << ", " << x.imag() << ')';
}

// complex operator + (const complex& x, const complex& y)
// {
//     return complex(x.real() + y.real(), x.imag() + y.imag());
// }

#endif
