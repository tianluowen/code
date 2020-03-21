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
    virtual void readfile() = 0;
    void openfile()
    {
        std::cout << "This is openfile" << std::endl;
        readfile();
    }
};

class B : public A
{
public:
    B()
    {
        std::cout << "这是 B()" << std::endl;
    }
    ~B()
    {
        std::cout << "这是 ~B()" << std::endl;
    }
    virtual void readfile()
    {
        std::cout << "这是 B readfile 调用" << std::endl;
    }
};

int main(void)
{
    B b;
    b.openfile();

    return 0;
}

// 结论：继承加上虚函数可以发挥很大的能力
