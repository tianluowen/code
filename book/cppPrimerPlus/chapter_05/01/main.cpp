// date: 2019-11-18 18:46
// desc: 用array存储输入三次的40米跑步成绩

#include <iostream>
#include <array>

int main(int argc, char *argv[])
{
    using namespace std;

    array<float, 3> ai;
    float favg = 0.0;

    cout << "请输入第一次40米跑成绩: ";
    cin >> ai[0];
    cout << "请输入第二次40米跑成绩: ";
    cin >> ai[1];
    cout << "请输入第三次40米跑成绩: ";
    cin >> ai[2];

    favg = (ai[0] + ai[1] + ai[2]) / 3.0;

    cout << endl << "用户三次40米跑的平均成绩为: " << favg << endl;

    return 0;
}
