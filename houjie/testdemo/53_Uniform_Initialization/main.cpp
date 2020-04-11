// date: 2020-04-11
// desc: Uniform Initialization

#include <iostream>
#include <string>
#include <vector>
#include <complex>

using namespace std;


int main(void)
{

    int values[] {1, 2, 3};
    vector<int> v {2, 3, 4, 5, 11, 13, 17};
    vector<string> cities { "shanghai", "beijing", "shenzhen"};
    complex<double> c {4.0, 3.0};

    cout << *values << endl;
    cout << v[0] << endl;
    cout << cities[2] << endl;
    cout << c << endl;

    return 0;
}
