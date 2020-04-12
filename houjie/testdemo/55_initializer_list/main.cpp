// date: 2020-04-12
// desc: initializer_list<>

#include <iostream>

// a list of vals
void print(std::initializer_list<int> vals)
{
    for (auto p = vals.begin(); p != vals.end(); ++p)
    {
        std::cout << *p << std::endl;
    }
}

int main(void)
{
    // pass a list of values
    // 传给 initializer_list 者，
    // 一定必须也是个 initializer_list(or {...}) 形式
    print({1, 2, 3, 4, 5});

    return 0;
}
