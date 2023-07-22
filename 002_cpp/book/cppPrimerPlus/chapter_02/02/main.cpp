// 时间：2019年10月21日08:49:41
// 目的：输入一个以long为单位的距离，转化为码输出

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    
    float flong = 0.0;
    float mlong = 0.0;

    cout << "请输入要转换的long(可以为小数)：";
    cin >> flong;

    mlong = flong * 220;
    cout << "\nlong = " << flong << "\n转化为码大小为\n" << "码 = " << mlong << endl;

    return 0;
}
