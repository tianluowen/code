// date: 2019-11-28 19:01
// desc: 输入最多十个数，求平均值

#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
    const int arrysize = 10;
    double donation[arrysize];
    
    int i = 0;
    while (i < arrysize)
    {
        std::cin >> donation[i];
        /* if (!isdigit(donation[i])) */
        /* { */
        /*     break; */
        /* } */
        i++;
    }

    int temp = 0;
    while (temp < i + 1 && temp < arrysize) 
    {
        std::cout << donation[temp] << std::endl;
        temp++;
    }

    return 0;
}
