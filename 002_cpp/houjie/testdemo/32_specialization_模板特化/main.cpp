// date: 2020-03-21
// desc: specialization 模板特化

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

private:
    T num;
};

template<>
class A<int>
{
public:
    A(int n)
     : num(n) { }
    void print()
    {
        std::cout << "这是整个模板特化的 pint 函数" << std::endl;
        std::cout << "num = " << num << std::endl;
    }
private:
    int num;
};

    


int main(void)
{
    A<int> a(3);
    a.print();

    A<float> b(3.2);
    b.print();
    
    return 0;
}
