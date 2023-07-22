// date: 2020-03-21
// desc: member template

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
    }

    T num;
};

template<typename TT>
class B:public A<TT>
{
public:
    template<typename TTT>
    explicit B(TTT n)
        : A<TT>(n) { }
    
};


int main(void)
{
    // 输出 3
    A<int> a(3);
    a.print();

    // 警告 输出 3
    A<int> aa(3);
    aa.print();

    // 不会警告，输出 3
    B<int>b(3.2);
    b.print();

    // 输出 3.2
    B<float>c(3.2);
    c.print();

    return 0;
}
