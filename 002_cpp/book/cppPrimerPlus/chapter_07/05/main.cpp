// date: 2020-04-15
// desc: 递归求阶乘

#include <iostream>

using namespace std;

long long factorial(int number);

int main(int argc, char *argv[])
{
    int number;
    long long result = 0;
    cout << "请输入要求的阶乘数: ";
    cin >> number;

    result = factorial(number);
    cout << number << "! = " <<  result << endl;

    return 0;
}

long long factorial(int number)
{
    if (number < 2)
    {
        return 1;
    }
    else 
    {
        return number * factorial(number - 1);
    }
}
