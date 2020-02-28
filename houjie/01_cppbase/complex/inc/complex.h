// data: 2020-02-28 
// desc: 关于复数类基本功能的实现

#ifndef __complex__ 
#define __complex__ 

// 声明类

template<typename T>

class complex
{
public:
    complex (T r = 0, T i = 0)
        : re (r), im (i)
    { }

private:
    T re, im;

    


}


#endif
