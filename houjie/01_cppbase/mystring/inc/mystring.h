// date: 2020-03-09
// desc: mystring

#ifndef __MYSTRING__
#define __MYSTRING__

class String
{
private:
	char* m_data;
public:
	String(const char* cstr == 0);
	String(const String& str);
	String& operator = (const String& str);
	~String();

};

~String()
{
	delete m_data;
}

#endif
