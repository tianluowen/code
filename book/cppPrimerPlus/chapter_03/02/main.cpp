// 时间：2019年10月24日09:24:13
// 目的：输入几英尺几英尺 和 体重磅

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    const int Transinch = 12;
    const float Transmeter = 0.0254;
    const float Transkg = 2.2;
    float ffoot;
    float finch;
    float fmeter;
    float fpound;
    float fkilogram;
    float fbmi;

    cout << "请输入你的身高(英尺):";
    cin >> ffoot;
    cout << "请输入你的身高(英寸):";
    cin >> finch;
    cout << "请输入你的体重(磅):";
    cin >> fpound;

    fmeter = (ffoot * Transinch + finch) * Transmeter;
    fkilogram = fpound / Transkg;
    fbmi = fkilogram / (fmeter * fmeter);
   
    cout << "\n你个人的BMI为 " << fbmi << endl;

    return 0;
}
