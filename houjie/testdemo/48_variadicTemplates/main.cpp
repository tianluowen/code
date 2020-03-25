// date: 2020-03-25
// desc: variadic templates (since C++11)

#include <iostream>
#include <bitset>

void print()
{
}
           
// 1
template<typename T, typename... Types>
void print(const T& firstArg, const Types&... args)
{
    std::cout << firstArg << std::endl;
    print(args...);
}

// 2
template<typename... Types>
void print(const Types&... args)
{
    std::cout << "Test" << std::endl;
}
 
int main(void)
{
    // 调用的是 1 不是很很明白
    // 更符合吗？
    print(7.5, "hello", std::bitset<16>(377), 42);

    std::cout << std::endl;

    return 0;
}
