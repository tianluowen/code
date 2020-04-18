// date: 2020-04-14
// desc: range_based for statement

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{

    vector<double> vec {2.0, 3.4, 4.5, 9.9};

    for (auto elem : vec)
    {
        cout << elem << endl;
    }
    cout << endl;

    for (auto& elem : vec)
    {
        elem *= 3;
    }
    cout << endl;

    for (auto elem : vec)
    {
        cout << elem << endl;
    }

    return 0;
}
