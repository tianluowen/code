// date: 2020-03-22
// desc: 重载 member new() delete()

#include <iostream>
#include <string>
           
using namespace std;

class Bad
{};

class Foo
{
public:
    int id;
    long data;
    string str;

    Foo()
     : id(0) 
    {
        cout << "default ctor this = " << this << " id = " << id << endl;
    }
    Foo(int i)
     : id(i) 
    { 
        cout << "ctor.this = " << this << " id = " << id << endl;
        throw Bad();
    }

    ~Foo()
    {
        cout << "dtor.this = " << this << " id = " << id << endl;
    }

    virtual void print() { }

    static void* operator new(size_t size);
    static void* operator new(size_t size, void* start);
    static void* operator new(size_t size, long extra);
    static void* operator new(size_t size, long extra, char init);
    // static void* operator new(long extra, size_t size);
    // static void operator delete(void* pdead);
    static void operator delete(void* pdead, size_t size);
    static void operator delete(void* pdead, void* start);
    static void operator delete(void* pdead, long extra);
    static void operator delete(void* pdead, long extra, char init);
};

// 1
void* Foo::operator new(size_t size)
{
    Foo* p = (Foo*)malloc(size);
    cout << "new size = " << size << endl;
    return p;
}

// 2
void* Foo::operator new(size_t size, void* start)
{
    return start;
}

// 3
void* Foo::operator new(size_t size, long extra)
{
    return malloc(size + extra);
}

// 4
void* Foo::operator new(size_t size, long extra, char init)
{
    return malloc(size + extra);
}

// 5 第一个参数类型必须是 size_t 否则编译出错
// void* Foo:operator new(long extra, size_t size)
// {
//     return malloc(extra + size);
// }

// 1
void Foo::operator delete(void* pdead, size_t size)
{
    cout << "delete size = " << size << endl;
    free(pdead);
}

// 2
void Foo::operator delete(void* pdead, void* start)
{
    cout << "operator delete(void*, void*)" << endl;
}

// 3
void Foo::operator delete(void* pdead, long extra)
{
    cout << "operator delete(void* pdead, long extra)" << endl;
}

// 4
void Foo::operator delete(void* pdead, long extra, char init)
{
    cout << "operator delete(void* pdead, long extra, char init)" << endl;
}

int main(void)
{
    Foo start;
    Foo* p1 = new Foo;
    cout << endl;
    Foo* p2 = new (&start)Foo;
    cout << endl;
    Foo* p3 = new (100)Foo;
    cout << endl;
    Foo* p4 = new (100, 'A')Foo;
    cout << endl;
    // Foo* p5 = new Foo(1);
    // cout << endl;
    // Foo* p6 = new (&start)Foo(2);
    // cout << endl;
    // Foo* p7 = new (100)Foo(3);
    // cout << endl;
    Foo* p8 = new (100, 'A')Foo(4);

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}

// 测试结果，自己的编译器没显示调用 delete()
