// date: 2020-03-21
// desc: pointer-like classes

#include <iostream>
 

template<class T>
class shared_ptr
{
public:
    T& operator*() const
    { return *px; }
    
    T* operator->() const
    { return px; }

    shared_ptr(T* p)
        : px(p) { }

private:
    T* px;
    long* pn;
};


struct Foo
{
    void methon(void)
    {
        std::cout << "TEST" << std::endl; 
    }
};

int main(void)
{
    shared_ptr<Foo> sp(new Foo());

    (*sp).methon();
    sp->methon();

    return 0;
}
