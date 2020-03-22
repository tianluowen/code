// date: 2020-03-22
// desc: 重载 member new new[] delete delete[]

#include <iostream>
#include <string>
           
using namespace std;

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
    }

    ~Foo()
    {
        cout << "dtor.this = " << this << " id = " << id << endl;
    }

    virtual void print() { }

    static void* operator new(size_t size);
    // static void operator delete(void* pdead);
    static void operator delete(void* pdead, size_t size);
    static void* operator new[](size_t size);
    // static void operator delete[](void* pdead);
    static void operator delete[](void* pdead, size_t size);
};

void* Foo::operator new(size_t size)
{
    Foo* p = (Foo*)malloc(size);
    cout << "new size = " << size << endl;
    return p;
}

void* Foo::operator new[](size_t size)
{
    Foo* p = (Foo*)malloc(size);
    cout << "new[] size = " << size << endl;
    return p;
}

void Foo::operator delete(void* pdead, size_t size)
{
    cout << "delete size = " << size << endl;
    free(pdead);
}

void Foo::operator delete[](void* pdead, size_t size)
{
    cout << "delete[] size = " << size << endl;
    free(pdead);
}

int main(void)
{
    Foo* pf = new Foo(7);
    delete pf;

    cout << endl;
    Foo* pff = new Foo[5];
    delete[] pff;

    cout << endl;
    Foo* pfn = ::new Foo(2);
    ::delete pfn;

    return 0;
}
