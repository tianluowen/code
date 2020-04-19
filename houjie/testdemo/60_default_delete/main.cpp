// date: 2020-04-19
// desc: = default  = delete

#include <iostream>

using namespace std;

class Foo
{
public:
    Foo(int i) : _i(i) {}
    Foo() = default;

    Foo(const Foo& x) : _i(x._i) {}
    // Foo(const Foo& x) = default; // ERROR ‘Foo& Foo::operator=(const Foo&)’ cannot be overloaded
    // Foo(const Foo& x) = delete;  // ERROR ‘Foo& Foo::operator=(const Foo&)’ cannot be overloaded

    Foo& operator=(const Foo& x) 
    {
        _i = x._i;
        return *this;
    }
    // Foo& operator=(const Foo& x) = default; // ERROR ‘Foo& Foo::operator=(const Foo&)’ cannot be overloaded
    // Foo& operator=(const Foo& x) = delete;  // ERROR ‘Foo& Foo::operator=(const Foo&)’ cannot be overloaded
    
    void func1() const
    {
        cout << "_i = " << _i << endl;
    }
    // void func1() = default; // ERROR ‘void Foo::func1()’ cannot be defaulted
    void func2() = delete;
    // void func3() = default; // ERROR ‘void Foo::func3()’ cannot be defaulted

    // ~Foo() = delete; // 这会造成构造的时候出错 ERROR use of deleted function ‘Foo::~Foo()’
    ~Foo() = default;

private:
    int _i;
};

int main(void)
{
    Foo f1(5);
    // 如果没有 = default 版本
    // ERROR no matching function for call to ‘Foo::Foo()’
    Foo f2;     
    // 如果有 copy ctor = delete
    //
    Foo f3(f1);

    f1.func1();
    f2.func1();
    f3.func1();
    // 没定义拷贝构造函数，且使用 = delete b不让默认的存在，则报错
    // use of deleted function ‘Foo& Foo::operator=(const Foo&)’
    f3 = f2;
    f3.func1();

    return 0;
}
