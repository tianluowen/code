// date: 2019-11-28 19:01
// desc: 输入最多十个数，求平均值

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[])
{
    const int arrysize = 10;
    double donation[arrysize];
    std::string strdouble;
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
            if (!isdigit(strdouble[j]) && strdouble[j] != '.')
            {
                std::cout << "Input error.\n";
                return 0;
            }
            j++;
        }
        donation[i] = atof(strdouble.c_str());

        /* if (!isdigit(donation[i])) */
        /* { */
        /*     break; */
        /* } */
        i++;
    }

    i = 0;
    double sum = 0;
    double avg = 0;
    for (; i < arrysize; i++)
    {
        sum += donation[i];
    }
    avg = sum / arrysize;
    std::cout << "这10个数的平均值为: " << avg << std::endl;

    int n = 0;
    i = 0;
    for (; i < arrysize; i++)
    {
        if (donation[i] > avg)
        {
            n++;
        }
    }
    std::cout << "有 " << n << " 数的值大于平均值." << std::endl;

    return 0;
}
