// date: 2020-03-20
// desc: is a

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
        std::cout << "这是 B()" << std::endl;
    }

    ~B()
    {
        std::cout << "这是 ~B()" << std::endl;
    }

private:
    A a;
};

int main(void)
{
    B b;


    return 0;
}

// 结论：先构建里面的类，在构造外面的类，先释放外面的类，在释放里面的类
//       先调用 A 的构造函数，在调用 B 的构造函数，先调用 B 的构造函数，在调用 A 的构造函数
