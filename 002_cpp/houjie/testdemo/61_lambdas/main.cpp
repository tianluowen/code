// date: 2020-05-09
// desc: lambdas

#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    // 最简单的 lambdas 形式
    auto l = []{
        std::cout << "hello lambda" << std::endl;
    };
    l();
    std::cout << std::endl;

    // 传值
    int id = 0;
    auto f = [id]() mutable {
    // 下面的会报错，只读变量 id
    // auto f = [id]() {
        std::cout << "id: " << id << std::endl;
        std::cout << "id addr: " << &id << std::endl;
        ++id;
    };
    id = 42;
    f();
    f();
    f();
    std::cout << "id: " << id << std::endl;
    std::cout << "id addr: " << &id << std::endl;
    std::cout << std::endl;

    // 传引用
    auto f2 = [&id]() mutable {
        std::cout << "id: " << id << std::endl;
        std::cout << "id addr: " << &id << std::endl;
        ++id;
    };
    id = 10;
    f2();
    f2();
    f2();
    std::cout << "id: " << id << std::endl;
    std::cout << "id addr: " << &id << std::endl;
    std::cout << std::endl;

    // 有参数的 lambdas
    // 两种方式都可以编译通过
    // auto f3 = [](int id) mutable {
    auto f3 = [](int id) {
        std::cout << "id: " << id << std::endl;
        std::cout << "id addr: " << &id << std::endl;
        ++id;
        std::cout << "id: " << id << std::endl;
        std::cout << "id addr: " << &id << std::endl;
    };
    f3(4);
    std::cout << std::endl;

    // 比较复杂的 lambdas
    int tobefound = 5;
    auto f4 = [tobefound] (int val) {
        return val == tobefound;
    };
    bool b1 = f4(2);
    bool b2 = f4(5);
    std::cout << std::boolalpha << "b1 = " << b1 << std::endl;
    std::cout << std::boolalpha << "b2 = " << b2 << std::endl;
    std::cout << std::endl;

    // test
    std::vector<int> vi {5, 28, 50, 83, 70, 590, 245, 59, 24};
    int x = 30;
    int y = 100;
    auto it = remove_if(vi.begin(),
                       vi.end(),
                       [x, y](int n) { return x < n && n < y; }
                       );
    vi.erase(it, vi.end());
    // 下面的等价上买的
    // vi.erase(remove_if(vi.begin(),
    //                    vi.end(),
    //                    [x, y](int n) { return x < n && n < y; }
    //                    ),
    //          vi.end()
    //         );
    for (auto i : vi)
        std::cout << i << std::endl;

    return 0;
}
