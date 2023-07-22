// date: 2019-11-25 18:36
// desc: 统计用户输入所有数据的和

#include <iostream>

int main(int argc, char *argv[])
{
    int temp;
    int sum = 0;

    do 
    {
        std::cout << "情输入一个数: ";
        std::cin >> temp;
        sum += temp;
    } while (temp);
    
    std::cout << std::endl << "输入所有数的和为: " << sum << std::endl;

    return 0;
}
