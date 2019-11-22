// date: 2019-11-25 17:39
// desc: 重新编写程序清单 5.4 并计算 100! 的值

#include <iostream>
#include <array>
#include <iomanip>

int main(int argc, char *argv[])
{
    using namespace std;

    const int ArSize = 101;
    array<double, ArSize> ad;
    
    ad[1] = ad[0] = 1;
    for (int i = 2; i < ArSize; i++)
    {
        ad[i] = ad[i-1] * i;
    }
    for (int i = 0; i < ArSize; i++)
    {
        std::cout << i << "! = " << setprecision(200) << ad[i] << std::endl;
    }

    return 0;
}
