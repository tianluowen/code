// 时间：2019-11-14 20:52
// 目的：定义一个数组，初始化，然后输出

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

    CandyBar snack[3] = 
    {
        {
            "Mocha Munch",
            2.3,
            350
        },
        {
            "Mocha Munch2",
            3.3,
            450
        },
        {
            "Mocha Munch3",
            4.3,
            550
        },
    };

    cout << "snack.name = " << snack[0].name << endl;
    cout << "snack.weight = " << snack[0].weight << endl;
    cout << "snack.calories = " << snack[0].calories << endl;
    cout << "snack.name = " << snack[1].name << endl;
    cout << "snack.weight = " << snack[1].weight << endl;
    cout << "snack.calories = " << snack[1].calories << endl;
    cout << "snack.name = " << snack[2].name << endl;
    cout << "snack.weight = " << snack[2].weight << endl;
    cout << "snack.calories = " << snack[2].calories << endl;

    return 0;
}
