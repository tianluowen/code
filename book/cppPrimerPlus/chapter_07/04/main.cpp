// date: 2020-02-27 
// desc: 计算彩票中奖的概率

#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks, unsigned numbers2, unsigned picks2);

int main(int argc, char *argv[])
{
    double total, choices;
    double total2, choices2;
    cout << "Enter the total number of choices on the game card and\n"
        "the number of picks allowed:\n";

    while ((cin >> total >> choices >> total2 >> choices2) && choices <= total && choices2 <= total2)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices, total2, choices2);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }

    cout << "bye\n";

    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned numbers2, unsigned picks2)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;

    for (n = numbers2, p = picks2; p > 0; n--, p--)
        result = result * n / p;

    return result;
}
