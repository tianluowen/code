// date: 
// desc: 

#include <iostream>
#include <string.h>

struct carinfo
{
    char carname[50];
    int year;
};

int main(int argc, char *argv[])
{
    int icars = 0;
    int i = 0;
    
    std::cout << "How many cars do you wish to catalog? ";
    std::cin >> icars;
    
    struct carinfo *p = new struct carinfo[icars];

    while (i < icars)
    {
        std::cout << "#" << i + 1 << ":" << std::endl;
        std::cout << "Please enter the make: ";
        getchar();
        std::cin.getline((p+i)->carname, 20);
        std::cout << "Please enter the year made: ";
        std::cin >> (p+i)->year;

        i++;
    }

    std::cout << "Here is your collection: \n";
    i = 0;
    while (i < icars)
    {
        std::cout << (p+i)->year << " " << (p+i)->carname << std::endl;

        i++;
    }

    delete p;

    return 0;
}
