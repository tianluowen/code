// date: 2020-03-16
// desc: fuctionTemplate

#include <iostream>

class complex
{
public:
    complex(double r = 0, double i = 0)
        : re(r), im(i)
    { }
    double real() const {
        return re;
    }
    double imag() const {
        return im;
    }

private:
    double re, im;
};


bool operator < (const complex& a, const complex& b)
{
   return a.real() < b.real();
}

template <class T>
inline
const T& min(const T& a, const T& b)
{
    return b < a ? b : a;
}

int main(void)
{
    complex c1(2.5, 1.5);
    complex c2(3.2, 4.2);

    complex a = min(c1, c2);
    
    std::cout << "min(c1, c2), c1 = " << c1.real() << ", c2 = " << c2.real() << std::endl;
    std::cout << a.real() << std::endl;


    return 0;
}

// test 函数模板的使用
