// date: 2020-05-10
// desc: Variadic Templates 重写 prinf() 函数

#include <iostream>

// 所有占位符输出完成后，输出后面的 字符串
// void printf(const char *s)
// {
//     while (*s != '\0')
//     {
//         if (*s == '%' && *(++s) != '%')
//         {
//             throw std::runtime_error("invalid format string: missing argu!\n");
//         }
//         std::cout << *s++;
//     }
// }

// 依次解析 输出
template<typename T, typename... Args>
void printf(const char *s, T value, Args... args)
{
    while (*s != '\0')
    {
        if (*s == '%' && *(++s) != '%')
        {
            std::cout << value;
            printf(++s, args...);
            return;
        }
        std::cout << *s++;
    }
    throw std::logic_error("extra arguments provided to printf");
}


int main(void)
{
    int num = 1234;

    printf("This is a test printf %d, %s, %f\n", num, "hello", 7.5);

#ifdef _STDIO_H 
    std::cout << "定义了 _STDIO_H" << std::endl;
#endif 

    return 0;
}
