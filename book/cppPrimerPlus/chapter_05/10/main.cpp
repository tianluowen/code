// date: 2019-11-25 20:31 
// desc: 打印矩形图形

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int rows;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j < rows - i - 1)
            {
                std::cout << ". ";
            }
            else
            {
                std::cout << "* ";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
