// date: 2019-11-25 18:47
// desc: 计算单利与复利的区别

#include <iostream>

int main(int argc, char *argv[])
{
    float dapheprincipal = 100; 
    float cleoprincipal = 100; 
    float daphneprofit = 0;
    float cleoprofit = 0;
    int years = 0;

    do 
    {
        years++;
        daphneprofit += (dapheprincipal * 0.1);
        cleoprofit += (cleoprincipal * 0.05);
        cleoprincipal *= 1.05;
    } while (daphneprofit > cleoprofit);
    
    std::cout << "经过 " << years << "年后，此时 Cleo 的投资价值超过了 Daphne 的投资价值" << std::endl;
    std::cout << "此时 Cleo 的投资价值为 " << cleoprofit << std::endl;
    std::cout << "此时 Daphne 的投资价值为 " << daphneprofit << std::endl;

    return 0;
}
