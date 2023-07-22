// 时间：2019年10月21日13:20:10
// 目的：编写函数输入时间的分钟和小时，按照规定的格式输出

#include <iostream>

void timeFormat(int hour, int minute);

int main(int argc, char *argv[])
{
    using namespace std;
    int hour;
    int minute;

    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of mintes: ";
    cin >> minute;

    timeFormat(hour, minute);

    return 0;
}

// timeFormat函数：将输入的小时和分钟格式化输出
void timeFormat(int hour, int minute)
{
    using namespace std;
    cout << "Time: " << hour << ":" << minute << endl;
}
