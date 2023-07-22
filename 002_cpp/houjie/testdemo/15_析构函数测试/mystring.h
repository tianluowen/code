// date: 2020-03-09
// desc: mystring

#ifndef __MYSTRING__
#define __MYSTRING__

#include <string.h>

class String
{
private:
	char* m_data;
public:
	String(const char* cstr = 0);
	~String();
    char* get_c_str() const 
    {
        return m_data;
    }
};

// 构造函数
inline String::String(const char* cstr)
{
    if (cstr)
    {
        m_data = new char[strlen(cstr) + 1];
        strcpy(m_data, cstr);
    }
    else  // 未设置初值
    {
        m_data = new char[1];
        *m_data = '\0';
    }

    std::cout << "m_data 已经生成" << std::endl;
    std::cout << "m_data = " << m_data << std::endl;

}

// 析构函数
inline String::~String()
{
	delete[] m_data;
    std::cout << "m_data 已经释放" << std::endl;
}

#endif
