// date: 2020-03-22
// desc: range base for (since for C++11)

#include <iostream>
#include <list>
#include <string>
           
using namespace std;
 
int main(void)
{
    list<string> c;
    c.push_back("no one on");
    c.push_back("This is str one.");
    c.push_back("test tes three");
    c.push_back("the end one");

    c.sort();

    for (auto& ite : c)
    {
        cout << ite << endl;
        ite = "test";
    }

    cout << endl; 
    for (auto ite : c)
    {
        cout << ite << endl;
    }

    cout << endl; 
    for (auto i : {1, 2, 3, 4, 5})
    {
        cout << i << endl; 
    }

    return 0;
}
