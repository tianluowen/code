// date: 2020-03-21
// desc: Delegation

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
};

class B
{
public:
    B()
    {
        pa = new A();
        std::cout << "这是 B()" << std::endl;
    }

    ~B()
    {
        delete pa;
        std::cout << "这是 ~B()" << std::endl;
    }

private:
    A* pa;
};

int main(void)
{
    B b;


    return 0;
}

// 结论：需要自己管理。生命周期完全是创建者决定的。
