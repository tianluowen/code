#include <iostream>
#include "test.h"

using namespace std;

int main(void)
{
    for (int i = 0; i < sizeof(testdata) / sizeof(int); i++)
        cout << "data[" << i << "] = " << testdata[i] << endl;


    return 0;
}
