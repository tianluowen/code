// date: 2020-03-22
// desc: 重载 ::new ::delete

#include <iostream>
           
using namespace std;

void* operator new(size_t size)
{
    cout << "Test void* operator new(size_t size) \n";
    return malloc(size);
}

void* operator new[](size_t size)
{
    cout << "Test void* operator new[](size_t size) \n";
    return malloc(size);
}

void operator delete(void* ptr)
{
    cout << "Test void operator delete(void* ptr) \n";
    free(ptr);
}

void operator delete[](void* ptr)
{
    cout << "Test void operator delete[](void* ptr) \n";
    free(ptr);
}

int main(void)
{
    int* pi = new int();
    delete pi;
    cout << endl;

    int* pj = new int[3];
    delete[] pj;
    cout << endl;

    int* pn = ::new int();
    ::delete pn;

    return 0;
}
