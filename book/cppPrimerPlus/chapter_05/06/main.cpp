// date: 2019-11-25 19:22
// desc: 输入三年的总销售额

#include <iostream>

int main(int argc, char *argv[])
{
    char months[12][10] = {
        {"January"},
        {"February"},
        {"March"},
        {"April"},
        {"May"},
        {"June"},
        {"July"},
        {"August"},
        {"September"},
        {"October"},
        {"November"},
        {"December"}
    };
    float sale[3][12];
    float sumsale = 0;

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 12; i++)
        {
            std::cout << "请输入第 " << j + 1 << " 年 " << months[i] << "月的销售量: ";
            std::cin >> sale[j][i];
        }
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 12; i++)
        {
            sumsale += sale[j][i];
        }
    }

    std::cout << std::endl << "3 年的总销售量为 " << sumsale << std::endl;

    return 0;
}
