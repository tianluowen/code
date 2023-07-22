// date: 2020-03-21
// desc: partial specialization 模板偏特化

#include <iostream>
 
template<typename T>
class A
{
public:
    A(T n)
     : num(n) { }
    void print()
    {
        std::cout << "num = " << num << std::endl;
        std::cout << std::endl;
    }

private:
    T num;
};

template<typename T>
class A<T*>
{
public:
    A(T* pn)
     : num(pn) { }
    void print()
    {
        std::cout << "这是整个模板偏特化的 pint 函数" << std::endl;
        std::cout << "num = " << num << std::endl;
        std::cout << "*num = " << *num << std::endl;
    }
private:
    T* num;
};

    


int main(void)
{
    A<float> b(3.2);
    b.print();
    
    float f = 3.2;
    A<float*> c(&f);
    c.print();

    return 0;
}
