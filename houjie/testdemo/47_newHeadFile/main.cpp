// date: 2020-03-23
// desc: test 头文件引用

#include <iostream>
// #include <cstdio>
#include <stdio.h>
           
int main(void)
{
    printf("This is test cstdio\n");
    std::cout << "This is test iostream" << std::endl;

    return 0;
}
