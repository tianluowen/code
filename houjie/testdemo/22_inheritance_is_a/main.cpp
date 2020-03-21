// date: 2020-03-21
// desc: inheritance is-a

#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "这是 A()" << std::endl;
    }

    ~A()
    {
        std::cout << "这是 ~A()" << std::endl;
    }

    int num = 111;
};

class B : public A
{
public:
    B()
    {
        std::cout << "这是 B()" << std::endl;
        std::cout << "Test num = " << num << std::endl;
    }

    ~B()
    {
        std::cout << "这是 ~B()" << std::endl;
    }
};

int main(void)
{
    B b;


    return 0;
}

// 结论：构造函数和析构函数调用顺序 composition 一样
//       先调用 A 的构造函数，在调用 B 的构造函数， 先调用 B 的析构函数，在调用 A 的析构函数
