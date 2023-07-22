// date: 2020-05-10
// desc: Variadic Templates

#include <iostream>
#include <bitset>

void printX()
{
}

template<typename T, typename... Types>
void printX(const T& firstArg, const Types&... args)
{
    std::cout << firstArg << std::endl;
    printX(args...);
}

// 该函数可以同上面的共存，但是当共存时，永远不会调用到该函数
template<typename... Types>
void printX(const Types&... args)
{
    std::cout << sizeof...(args) << std::endl;
}

int main(void)
{
    printX(7.5, "hello", std::bitset<4>(14), 44);

    return 0;
}
