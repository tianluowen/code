// date: 2019-12-28 17:03
// desc: 计算用户输入多个成绩的平均值

#include <iostream>

int main(int argc, char *argv[])
{
    float sorce[10];
    int i = 0;

    std::cout << "请依次输入 10 个高尔夫球成绩\n";
    do {
        std::cout << "请输入第 " << i + 1 << " 次成绩: ";
        std::cin >> sorce[i];
        i++;
    }
    while (i < 10);

    for (int j = 0; j < i; j++)
    {
        std::cout << sorce[j] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}


