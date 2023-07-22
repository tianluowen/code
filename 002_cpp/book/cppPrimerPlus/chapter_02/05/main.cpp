// 时间：2019年10月21日10:58:35
// 目的：编写一个函数将摄氏温度转化为华氏温度

#include <iostream>

float temperConverFahrenheit(float celsius);

int main(int argc, char *argv[])
{
    using namespace std;

    float celsius = 0;
    float fahrenheit = 0;

    cout << "Please enter a Celsius value:";
    cin >> celsius;

    fahrenheit = temperConverFahrenheit(celsius);
    cout << celsius << " degress Celsius is " << fahrenheit << " degress Fahrenheit" << endl;
}

// temperConver 函数：将输入的摄氏温度转化为华氏温度
float temperConverFahrenheit(float celsius)
{
    float fahrenheit;
    fahrenheit = 1.8 * celsius + 32.0;

    return fahrenheit;
}
