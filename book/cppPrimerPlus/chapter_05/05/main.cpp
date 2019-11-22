// date: 2019-11-25 19:04
// desc: 报告一年中的销售量

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
    float sale[12];
    float sumsale = 0;
    
    for (int i = 0; i < 12; i++)
    {
        std::cout << "请输入 " << months[i] << "月的销售量: ";
        std::cin >> sale[i];
    }
    for (int i = 0; i < 12; i++)
    {
        sumsale += sale[i];
    }

    std::cout << std::endl << "12 个月的总销售量为 " << sumsale << std::endl;

    return 0;
}
