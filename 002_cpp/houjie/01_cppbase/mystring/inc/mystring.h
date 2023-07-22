// date: 2020-03-09
// desc: mystring

#ifndef __MYSTRING__
#define __MYSTRING__

#include <string.h>
#include <iostream>

using namespace std;
class String
{
private:
	char* m_data;
public:
	String(const char* cstr = 0);
	String(const String& str);
	String& operator = (const String& str);
	~String();
    char* get_c_str() const 
    {
        return m_data;
    }
    int length()
    {
        return strlen(m_data);
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

}

// 拷贝构造函数
inline String::String(const String& str)
{
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
}

// 拷贝赋值
inline String& String::operator = (const String& str)
{
    if (this == &str)
    {
        return *this;
    }

    delete[] m_data;
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
    return *this;
}

// 析构函数
inline String::~String()
{
	delete[] m_data;
}

// 输出函数
ostream& operator<<(ostream& os, const String& str)
{
    os << "[ " << str.get_c_str() << " ]";
    return os;
}

#endif
