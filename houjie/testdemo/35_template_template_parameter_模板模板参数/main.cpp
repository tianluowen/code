// date: 2020-03-21
// desc: template template parameter，模板模板参数

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

template<typename T,
        template <typename U> 
            class C
        >
class B
{
public:
    B(T n)
     : num(n) { }
    void print()
    {
        std::cout << "这是 模板模板参数 的 print 函数" << std::endl;
        std::cout << "num = " << num << std::endl;
        a.print();
    }
private:
    T num;
    // C<T> a(3.2);
    C<T> a = C<T>(3.2);
};

    


int main(void)
{
    B<int, A> b(3);
    b.print();
    
    B<float, A> c(3.2);
    c.print();

    return 0;
}
