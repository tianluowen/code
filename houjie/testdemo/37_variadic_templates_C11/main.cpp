// date: 2020-03-22
// desc: variadic templates (since C++11)

#include <iostream>
#include <bitset>

void print()
{
}
           
template<typename T, typename... Types>
void print(const T& firstArg, const Types&... args)
{
    std::cout << firstArg << std::endl;
    print(args...);
}
 
int main(void)
{
    print(7.5, "hello", std::bitset<16>(377), 42);

    return 0;
}
