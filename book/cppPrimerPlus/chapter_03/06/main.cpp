// 时间：2019年10月25日15:15:31
// 目的：计算汽车的耗油情况

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    float fkilometer;
    float flitre;
    float fmile;
    float fgallon;

    cout << "请输入驱车里程（英里）: ";
    cin >> fmile;
    cout << "请输入使用汽油量（加仑）: ";
    cin >> fgallon;

    cout << "\n汽车每耗油 1 加仑可以行驶 " << fmile / fgallon << " 英里\n";

    cout << "\n请输入驱车里程（公里）: ";
    cin >> fkilometer;
    cout << "请输入使用汽油（升）: ";
    cin >> flitre;

    cout << "\n汽车每 100 公里耗油量为 " << flitre / fkilometer * 100 << " 升\n";


    return 0;
}
