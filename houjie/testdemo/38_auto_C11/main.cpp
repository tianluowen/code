// date: 2020-03-22
// desc: auto (since C++11)

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

    // list<string>::iterator ite;
    // for (ite = c.begin(); ite != c.end(); ite++)
    for (auto ite = c.begin(); ite != c.end(); ite++)
    {
        cout << *ite << endl;
    }

    return 0;
}
