// desc: 复数测试类的头文件

// 防御式声明
#ifndef __SINGLETONTEST__
#define __SINGLETONTEST__

#include <iostream>

static int n = 0;

// Singleton 设计模式
class A
{
public:
    static A& getInstance();
    void setup(void)
    {
        std::cout << "生成类成功" << std::endl;
    }
private:
    A(void)
    {
        std::cout << "构造 A 成功" << std::endl;
    }
    // A(const A& rhs);
};

A& A::getInstance()
{
    static A a;
    n++;
    std::cout << "第 " << n << " 次调用 getInstance" << std::endl;
    return a;
}

#endif


