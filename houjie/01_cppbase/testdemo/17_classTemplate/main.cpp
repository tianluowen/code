// date: 2020-03-16
// desc: classTemplate

#include <iostream>

template<typename T>
class complex
{
public:
    complex(T r = 0, T i = 0)
        : re(r), im(i)
    { }
    T real() const {
        return re;
    }
    T imag() const {
        return im;
    }
private:
    T re, im;
};


int main(void)
{
    complex<double> c1(2.5, 1.5);
    complex<int> c2(3, 4);

    std::cout << "complex<double> c1(2.5, 1.5), c1 = " << c1.real() << ", " << c1.imag() << std::endl;
    std::cout << "complex<int> c2(3, 4), c2 = " << c2.real() << ", " << c2.imag() << std::endl;

    return 0;
}

// test 类模板的使用
