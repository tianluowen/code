// date: 2019-11-18 18:46
// desc: 求出输入两个数之间所有数的和

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    int istart;
    int iend;
    int itemp;
    int sum = 0;

    cout << "请输入开始计算的数字";
    cin >> istart;
    cout << "请输入结束计算的数字";
    cin >> iend;

    for (itemp=istart; itemp<=iend; itemp++)
    {
       sum += itemp; 
    }

    cout << istart << " 到 " << iend << " 之间所有数字和为 " << sum << endl;
    
    return 0;
}
