// date: 2020-03-21
// desc: conversion function

#include <iostream>

 
class Fraction 
{
public:
    Fraction(int num, int den = 1)
        : m_numerator(num), m_denominator(den) { }
    // operator double() const 
    // {
    //     return (double)m_numerator / m_denominator;         
    // }
    
    Fraction operator+(const Fraction& f)
    {
        return Fraction(this->m_n() + f.m_n(), 
                this->m_d() + f.m_d());
    }

    void print()
    {
        std::cout << "分子 = " << m_numerator << std::endl;
        std::cout << "分母 = " << m_denominator << std::endl;
    }

    int m_n() const 
    {
        return m_numerator;
    }
    int m_d() const 
    {
        return m_denominator;
    }

private:
    int m_numerator;     // 分子
    int m_denominator;   // 分母
};

int main(void)
{
    Fraction f(3, 5);
    // double d = 4 + f;
    // std::cout << "d = 4 + f, " << d << std::endl;
    // double d;
    // d = f + 4;
    // std::cout << "d = f + 4, " << d << std::endl;

    Fraction fr = f + 4;
    fr.print();
}
