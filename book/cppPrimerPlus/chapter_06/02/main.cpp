// date: 2019-11-28 19:01
// desc: 输入最多十个数，求平均值

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[])
{
    const int arrysize = 10;
    double donation[arrysize];
    string strdouble;
    int doulen = 0;

    std::cout << "Enter 10 donation\n";
    
    int i = 0;
    while (i < arrysize)
    {
        std::cin >> strdouble;
        doulen = strdouble.size();

        int j = 0;
        while (j < doulen)
        {
            if (!isdigit(strdouble[j] && strdouble[j] != '.'))
            {
                std::cout << "Input error.\n";
                return 0;
            }
        }
        donation[i] = atof(strdouble);

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
