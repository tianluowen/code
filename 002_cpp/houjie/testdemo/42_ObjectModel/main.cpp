// date: 2020-03-22
// desc: Object Model

#include <iostream>
#include <list>
           
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

class C: public A
{
public:
    virtual void print(void)
    {
        cout << "Test this is C virtual print." << endl;
    }
};
 
class D: public B
{
public:
    virtual void print(void)
    {
        cout << "Test this is D virtual print." << endl;
    }
};


int main(void)
{
    list<A*> lt;
    A* a = new A();
    B* b = new B();
    C* c = new C();
    D* d = new D();

    lt.push_back(a);
    lt.push_back(b);
    lt.push_back(c);
    lt.push_back(d);

    for (auto ite = lt.begin(); ite != lt.end(); ite++)
    {
        // 多态 动态绑定 虚函数
        (*ite)->print();
        (*(*ite)).print();
    }
        
    delete a;
    delete b;
    delete c;
    delete d;

    return 0;
}
