// date: 2020-03-03
// desc: 观察 ctor 放在 private

#include <iostream>
#include "./SingletonTest.h"

int main(int argc, char *argv[])
{
    // A a;
    A::getInstance().setup();   // 使用
    std::cout << std::endl;

    A::getInstance().getInstance();
    std::cout << std::endl;
    
    A::getInstance().getInstance().getInstance();

    return 0;
}
