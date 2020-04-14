// date: 2020-04-13
// desc: initializer_list<>

#include <iostream>

using namespace std;

class P
{
public:
    P(int a, int b)
    {
        cout << "P(int a, int bn), a = " << a << ", b = " << b << endl;
    }

    P(initializer_list<int> initlist)
    {
        cout << "P(initializer_list<int> initlist), values = ";
        for (auto i : initlist)
            cout << i << " ";
        cout << endl;
    }
};

int main(void)
{
    P p(77, 5);         // P(int a, int bn), a = 77, b = 5
    P q{77, 5};         // P(initializer_list<int> initlist), values = 77 5 
    P r{77, 5, 42, 4};  // P(initializer_list<int> initlist), values = 77 5 42
    P s = {77, 5};      // P(initializer_list<int> initlist), values = 77 5

    return 0;
}
