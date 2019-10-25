// 时间：2019年10月25日15:15:31
// 目的：计算汽车的耗油情况

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    const float Transkm = 62.14;
    const float Transgallon = 3.875;
    float flitre;
    float fmile;
    float fgallon;

    cout << "请输入驱车 100 公里消耗汽油（升）: ";
    cin >> flitre;

    fmile = Transkm;
    fgallon = flitre / Transgallon;

    cout << "\n汽车每耗油 1 加仑可以行驶 " << fmile / fgallon << " 英里\n";

    return 0;
}
