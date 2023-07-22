// 时间：2019年10月25日15:03:49
// 目的：显示自己国家人口数占世界人口数的百分比

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    long long llallperson;
    long long llnationperson;
    float fpercen;
    
    cout << "Enter the world's population: ";
    cin >> llallperson;
    cout << "Enter the population of the China: ";
    cin >> llnationperson;

    fpercen = (float)llnationperson / llallperson * 100;
    cout << "\nThe population of the China is " << fpercen << "% of the world population.\n";

    return 0;
}
