// 时间：2019年10月25日14:27:44
// 目的：输入整数时间，转换计算有 days hours minutes seconds 的形式

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    int Transmin = 60;
    int Transday = 24;
    long long llseconds;
    int iday;
    int ihour;
    int imintue;
    int isecond;
    
    cout << "Enter the world's population: ";
    cin >> llseconds;

    // 以秒为例 总秒数 除以 60 取整是分钟数 取模是 秒数
    isecond = llseconds % Transmin; 
    imintue = llseconds / Transmin;
    ihour = imintue / Transmin;
    imintue = imintue % Transmin;
    iday = ihour / Transday;
    ihour = ihour % Transday;

    cout << endl << llseconds << " seconds = " << iday << " days, " << ihour 
        << " hours, " << imintue << " minutes, " << isecond << " second\n";

    return 0;
}
