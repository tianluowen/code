// date: 2020-03-21
// desc: inheritance compositon

#include <iostream>

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
};

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
    B b;
};


class C : public A
{
public:
    C()
    {
        std::cout << "这是 C()" << std::endl;
    }
    ~C()
    {
        std::cout << "这是 ~C()" << std::endl;
    }
    virtual void readfile()
    {
        std::cout << "这是 C readfile 调用" << std::endl;
    }
private:
    // B b;
};

int main(void)
{
    C c;
    c.openfile();

    return 0;
}

// 结论：先是父类的 composition 在是父类 最后是自己
