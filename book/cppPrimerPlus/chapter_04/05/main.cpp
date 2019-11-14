// 时间：2019-11-14 20:50
// 目的：定义一个结构体 初始化并输出结构体成员内容

#include <iostream>
#include <string>

struct CandyBar 
{
    char name[20];
    float weight;
    int calories;
};

int main(int argc, char *argv[])
{
    using namespace std;

    CandyBar snack =
    {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "snack.name = " << snack.name << endl;
    cout << "snack.weight = " << snack.weight << endl;
    cout << "snack.calories = " << snack.calories << endl;

    return 0;
}
