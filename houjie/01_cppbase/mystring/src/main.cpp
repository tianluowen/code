// date: 2020-03-11
// desc: test mystring

#include <iostream>
#include "../inc/mystring.h"

int main(int argc, char *argv[])
{
    String s1("hello");
    String s2 = String();
    String s3 = String("hello2");
    String s5 = String(s1);
    String s6(s3);
    // String s3 = new String();
    String* s4 = new String("word");
    String* s7 = new String(s3);
    
    std::cout << "test 构造函数 & <<" << std::endl;
    std::cout << "String s1(\"hello\"), s1 = " << s1 << std::endl;
    std::cout << "String s2 = String(), s2 = " << s2 << std::endl;
    std::cout << "String s3 = String(\"hello2\") , s3 = " << s3 << std::endl;
    std::cout << "String* s4 = new String(\"word\"), s4 = " << *s4 << std::endl;
    std::cout << "String s5 = String(s1), s5 = " << s5 << std::endl;
    std::cout << "String s6(s3), s6 = " << s6 << std::endl;
    std::cout << "String* s7 = new String(s3), s7 = " << *s7 << std::endl;

    std::cout << std::endl;
    std::cout << "test =" << std::endl;
    *s7 = s1;
    std::cout << "*s7 = s1, s7 = " << *s7 << std::endl;
    s1 = s3;
    std::cout << "s1 = s3, s1 = " << s1 << std::endl;
    s2 = *s4;
    std::cout << "s2 = *s4, s2 = " << s2 << std::endl;

    std::cout << std::endl;
    std::cout << "test leng" << std::endl;
    int length = s1.length();
    std::cout << "int length = s1.length(), s1 = " << s1 << " s1.length = " << length << std::endl; 
    length = s4->length();
    std::cout << "length = s4->length(), s4 = " << *s4 << " s4->length = " << length << std::endl; 
    
    std::cout << "test end" << std::endl;
    
    return 0;
}
