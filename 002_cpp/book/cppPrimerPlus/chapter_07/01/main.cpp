// date: 2019-12-26 21:26 
// desc: 计算多组输入，每组各两个数，的平均值，直到为0

#include <iostream>

double averageTwoDouble(double d1, double d2);

int main(int argc, char *argv[])
{
    double d1;
    double d2;
    double average = 0.0;

    do {
        // 接受数据
        std::cout << "请输入两个数，输入 0 结束输入\n";
        std::cout << "请输入第一个数: ";
        std::cin >> d1;
        if (d1 < 0.000001 && d1 > -0.000001)
        {
            break;
        }

        std::cout << "请输入第二个数: ";
        std::cin >> d2;
        if (d2 < 0.000001 && d2 > -0.000001)
        {
            break;
        }

        // 计算数据 输出
        average = averageTwoDouble(d1, d2);
        std::cout << d1 << " " << d2 << " 的调和平均数为 " << average <<  "\n\n";
    }
    while (true);

    return 0;
}

// averageTwoDouble 函数：计算两个数的调和平均数
double averageTwoDouble(double d1, double d2)
{
    double average = 0.0;

    average = 2.0 * d1 * d2 / (d1 + d2);
    
    return average;
}
