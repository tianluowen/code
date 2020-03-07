// data: 2020-02-28 
// desc: 关于复数类基本功能的实现

#ifndef __complex__ 
#define __complex__ 

// 声明类
// 使用模板函数模板类

template<typename T>

class complex
{
private:
    T re, im;

public:
    complex (T r = 0, T i = 0)
        : re (r), im (i)
    { }

    // 获取值，和设置值
    T real(void) const
    {
        return re;
    }
    T imag(void) const
    {
        return im;
    }
    
    void real(T r) 
    {
        re = r;
    }
    void imag(T i)
    {
        im = i;
    }

    // 操作符重载
    
    complex& operator += (const complex& x);
    
    // 共轭

    // 输出打印
}


complex& complex::operator += (const complex& x)
{
    return complex(this->re + x->re, this->im + x->im);
}


#endif
