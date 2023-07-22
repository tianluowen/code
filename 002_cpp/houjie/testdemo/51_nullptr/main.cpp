// date: 2020-03-25
// desc: nullptr and std::nullptr_t

#include <iostream>

using namespace std;

void f(int n)
{
    cout << "void f(int)" << endl;
}

void f(void* p)
{
    cout << "void f(void*)" << endl;    
}

int main(void)
{
    char *p = NULL;

    f(0);
    // f(NULL);
    f(p);
    f(nullptr);

    return 0;
}
