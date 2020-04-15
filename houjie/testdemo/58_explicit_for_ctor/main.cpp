// date: 2020-04-14
// desc: explicit for ctors taking more than one argument

#include <iostream>

using namespace std;

class P
{
public:
    P(int a, int b)
    {
        cout << "P(int a, int b)" << endl;
    }
    // P(initializer_list<int> values)
    // {
    //     cout << "P(initializer_list<int> values)" << endl; 
    // }
    // P(int a, int b, int c)
    explicit P(int a, int b, int c)
    {
        cout << "P(int a, int b, int c)" << endl;
    }
};

void fp(const P&)
{}

int main(void)
{

    // explicit ctor with multi-argments
    P p1 (77, 5);
    P p2 {77, 5};
    P p3 {77, 5, 43};
    // 这边不加 explicit 会调用 构造函数 构造一个 P 类型 在赋值
    P p4  = {77, 5};     
    // P p5 = {77, 5, 42};  // ERROR chosen constructor is explicit in copy-initialization
    P p6 (77, 5, 42);

    cout << endl;
    fp({47, 11}); 
    // fp({47, 11, 3});    // ERROR chosen constructor is explicit in copy-initialization
    fp(P {47, 11});
    fp(P {47, 11, 3});
    fp(P (47, 11, 3));

    cout << endl;
    P p11 {77, 5, 42};    
    // P p12 = {77, 5, 42}; // ERROR chosen constructor is explicit in copy-initialization
    P p13 = {2, 3};

    return 0;
}
