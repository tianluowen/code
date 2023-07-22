// date: 2020-03-21
// desc: 测试 空结构体的大小，结果为 1

#include <iostream>
 
template <class Arg, class Result>
struct unary_function {
    typedef Arg argument_type;
    typedef Result result_type;
};

int main(void)
{
    int size = sizeof(unary_function<int, int>);

    std::cout << "sizof(unary_function) = " << size << std::endl;

    return 0;
}
