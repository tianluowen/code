// 时间：2019年10月21日11:53:41
// 目的：编写函数将光年转化为对应的天文单位的值

#include <iostream>

double lightToMiles(double light);

int main(int argc, char *argv[])
{
    using namespace std;

    double light = 0.0;
    double miles = 0.0;
    cout << "Enter the number of light years:";
    cin >> light;

    miles = lightToMiles(light);
    cout << light << " light years = " << miles << " astronomical units." << endl;
    
    return 0;
}

// lightToMiles 函数：将输入的光年转换为英里单位返回
double lightToMiles(double light) 
{
    double miles;

    miles = 63240 * light;

    return miles;
}
