// date: 2020-03-22
// desc: dynamic binding

#include <iostream>
           
using namespace std;

class A 
{
public:
    virtual void print(void)
    {
        cout << "Test this is A virtual print." << endl;
    }
};

class B: public A
{
public:
    virtual void print(void)
    {
        cout << "Test this is B virtual print." << endl;
    }
};

int main(void)
{

    B b = B();
    A a = (A)b;

    b.print();      // B
    a.print();      // A   因为 a 是一个对象
    (&a)->print();  // A   因为 a 是一个对象

    A* pa = &b;
        
    pa->print();    // B   因为 pa 是一个指针
    (*pa).print();  // B   因为 pa 是一个指针

    pa = new B();
    pa->print();    // B
    (*pa).print();  // B

    return 0;
}
