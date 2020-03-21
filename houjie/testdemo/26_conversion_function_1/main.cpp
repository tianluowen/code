// date: 2020-03-21
// desc: conversion function

#include <iostream>

 
class Fraction 
{
public:
    Fraction(int num, int den = 1)
        : m_numerator(num), m_denominator(den) { }
    operator double() const 
    {
        return (double)m_numerator / m_denominator;         
    }
    void print()
    {
        std::cout << m_numerator << std::endl;
        std::cout << m_denominator << std::endl;
    }

private:
    int m_numerator;     // 分子
    int m_denominator;   // 分母
};

int main(void)
{
    Fraction f(3, 5);
    double d = 4 + f;
    std::cout << "d = 4 + f, " << d << std::endl;
    d = f + 4;
    std::cout << "d = f + 4, " << d << std::endl;

    Fraction fr = 4 + f;
    fr.print();
}
