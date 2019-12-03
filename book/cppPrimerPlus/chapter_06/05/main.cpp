// date: 2019-12-03 18:45
// desc: 输入用户收入，求的税

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[])
{
    std::string strpay;
    double pay;

    std::cout << "Enter wage: ";
    
    while (true)
    {
        std::cin >> strpay;
        pay = strpay.size();

        int i = 0;
        int flag = false;
        while (i < pay)
        {
            if (!isdigit(strpay[i]) && strpay[i] != '.')
            {
                std::cout << "Input error.\n";
                flag = true;
                break;
            }
            i++;
        }
        pay = atof(strpay.c_str());
        if (pay < 0 || flag)
        {
            break;
        }

        double dtax = 0;
        if (pay > 35000)
        {
            dtax += (pay - 35000) * 0.2;
            pay = 35000;
        }
        if (pay > 15000)
        {
            dtax += (pay - 15000) * 0.15;
            pay = 15000;
        }
        if (pay > 5000)
        {
            dtax += (pay - 5000) * 0.1;
        }

        std::cout << "tax = " << dtax << std::endl;
        std::cout << "Enter wage: ";
    }

    return 0;
}
