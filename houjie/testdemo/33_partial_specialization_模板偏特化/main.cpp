// date: 2020-03-21
// desc: partial specialization 模板偏特化

#include <iostream>
 
template<typename T, typename U>
class A
{
public:
    A(T n, U d)
     : num(n), data(d) { }
    void print()
    {
        std::cout << "num = " << num << std::endl;
        std::cout << "data = " << data << std::endl;
        std::cout << std::endl;
    }

private:
    T num;
    U data;
};

template<typename U>
class A<int, U>
{
public:
    A(int n, U d)
     : num(n), data(d) { }
    void print()
    {
        std::cout << "这是模板偏特化的 pint 函数" << std::endl;
        std::cout << "num = " << num << std::endl;
        std::cout << "data = " << data << std::endl;
        std::cout << std::endl;
    }
private:
    int num;
    U data;
};

    


int main(void)
{
    A<int, int> a(3, 3);
    a.print();

    A<float, int> b(3.2, 3);
    b.print();
    
    return 0;
}
