// data: 2020-02-28 
// desc: 关于复数类基本功能的实现

#ifndef __complex__ 
#define __complex__ 

using namespace std;

// 声明类
// 使用模板函数模板类
namespace testComplex
{
// template<typename T>
class complex
{
private:
    double re, im;

    friend complex& __doapl(complex* ths, const complex& r); 
    friend complex& __doapl(complex* ths, const double& x);
    friend complex& __dosub(complex* ths, const complex& x);
    friend complex& __dosub(complex* ths, const double& x);

public:
    complex(double r = 0, double i = 0)
        : re(r), im(i)
    { }

    // 获取值，和设置值
    double real(void) const
    {
        return re;
    }
    double imag(void) const
    {
        return im;
    }
    void real(double r) 
    {
        re = r;
    }
    void imag(double i)
    {
        im = i;
    }

    // 操作符重载
    complex& operator += (const complex& x);
    complex& operator += (const double& x);
    complex& operator -= (const complex& x);
    complex& operator -= (const double& x);

    // 等或者不相等

    // 共轭
    complex Conjugate(void);

};

// += 重载
inline complex& complex::operator += (const complex& r)
{
    return __doapl(this, r);
}

inline complex& __doapl(complex* ths, const complex& r)
{
    ths->re += r.re;
    ths->im += r.im;
    // 当函数不被声明为 frined 的时候，函数可以通过下面的方式使用
    // ths->real(ths->real() + r.real());
    // ths->imag(ths->imag() + r.imag());

    return *ths;
}

inline complex& complex::operator += (const double& x)
{
    return __doapl(this, x);
}

inline complex& __doapl(complex* ths, const double& x)
{
    ths-> re += x;

    return *ths;
}

// -= 重载
inline complex& complex::operator -= (const complex& x)
{
    return __dosub(this, x);
}

inline complex& __dosub(complex* ths, const complex& x)
{
    ths->re -= x.re;
    ths->im -= x.im;

    return *ths;
}

inline complex& complex::operator -= (const double& x)
{
    return __dosub(this, x);
}

inline complex& __dosub(complex* ths, const double& x)
{
    ths->re -= x;

    return *ths;
}

// 输出格式
ostream& operator << (ostream& os, const complex& r)
{
    return os << '(' << r.real() << ", " << r.imag() << ')'; 
}

// + 重载 
inline complex operator + (const complex& x, const complex& y)
{
    return complex(x.real() + y.real(), x.imag() + y.imag());
}

inline complex operator + (const complex& x, const double& y)
{
    return complex(x.real() + y, x.imag());
}

inline complex operator + (const double& x, const complex& y)
{
    return complex(x + y.real(), y.imag());
}

// - 重载
inline complex operator - (const complex& x, const complex& y)
{
    return complex(x.real() - y.real(), x.imag() - y.imag());
}

inline complex operator - (const complex& x, const double& y)
{
    return complex(x.real() - y, x.imag());
}

inline complex operator - (const double& x, const complex& y)
{
    return complex(x - y.real(), y.imag());
}

// * 重载
inline complex operator * (const complex& x, const complex& y)
{
    return complex(x.real() * y.real() - x.imag() * y.imag(),
            x.imag() * y.real() + x.real() + y.imag());
}

inline complex operator * (const complex& x, const double& y)
{
    return complex(x.real() * y, x.imag() * y);
}

inline complex operator * (const double& x, const complex& y)
{
    return complex(x * y.real(), x * y.imag());
}

// \ 重载
inline complex operator / (const complex& x, const complex& y)
{
    float a = x.real();
    float b = x.imag();
    float c = y.real();
    float d = y.imag();

    return complex((a * c + b * d) / (c * c + d * d),
                   (b * c - a * d) / (c * c + d * d));
}

inline complex operator / (const complex& x, const double& y)
{
    return complex(x.real() / y, x.imag() / y);
}

inline complex operator / (const double& x, const complex& y)
{
    float a = x;
    float c = y.real();
    float d = y.imag();

    return complex((a * c) / (c * c + d * d),
                   (0 - a * d) / (c * c + d * d));
}

// 共轭
inline complex Conjugate(void)
{
    return complex(this->re, -this->im);
}

}


#endif
