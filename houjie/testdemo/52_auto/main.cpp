// date: 2020-04-11
// desc: auto

#include <iostream>
#include <string>
#include <vector>

using namespace std;

double f()
{
    return 0.0;
}

int main(void)
{

    auto i = 42; // i has type int
    auto d = f(); // d has type double

    std::cout << "i = " << i << "  d = " << d << std::endl;

    vector<string> v {"abc"};

    auto pos = v.begin();       // pos has type vector<string>::iterator

    std::cout << "pos = " << *pos << std::endl;

    auto I = [](int x)->bool {  // I has the type of a lambda
        // taking an int and returing a bool
    };

    return 0;
}
