// date: 2019-12-02 19:03
// desc: 根据输入选择输出结构体内容

#include <iostream>

const int strsize = 32;

// Benevolent Order of Programmers name structure
struct bop {
    char fullname[strsize];     // real name
    char title[strsize];        // job title
    char bopname[strsize];      // secret BOP name
    int preference;             // 0 = fullname, 1 = title, 2 = bopname
};

struct bop bopinfo[5] = {
    {"Wimp Macho", "a", "WM", 0},
    {"Raki Rhodes", "Junior Programmer", "RR", 1},
    {"Celia Laiter", "c", "MIPS", 2},
    {"Hoppy Hipman", "Analyst Trainee", "HH", 1},
    {"Pat Hand", "e", "LOOPY", 2}
};

int main(int argc, char *argv[])
{
    std::cout << "Benevolent Order of Programmers Report\n";
    std::cout << "a. display by name        b. display by title\n";
    std::cout << "c. display by bopname     d. display by preference\n";
    std::cout << "q. quit\n";
    
    std::cout << "Enter your choce: ";
    
    char ch;
    bool flag = true;
    do {
        std::cin >> ch;

        switch(ch)
        {
            case 'a':
                for (int i = 0; i < 5; i++)
                {
                    std::cout << bopinfo[i].fullname << std::endl;
                }
                std::cout << "Next choice: ";
                break;
            case 'b':
                for (int i = 0; i < 5; i++)
                {
                    std::cout << bopinfo[i].title << std::endl;
                }
                std::cout << "Next choice: ";
                break;
            case 'c':
                for (int i = 0; i < 5; i++)
                {
                    std::cout << bopinfo[i].bopname << std::endl;
                }
                std::cout << "Next choice: ";
                break;
            case 'd':
                for (int i = 0; i < 5; i++)
                {
                    if (bopinfo[i].preference == 0)
                    {
                        std::cout << bopinfo[i].fullname << std::endl;
                    }
                    else if (bopinfo[i].preference == 1)
                    {
                        std::cout << bopinfo[i].title << std::endl;
                    }
                    else if (bopinfo[i].preference == 2)
                    {
                        std::cout << bopinfo[i].bopname << std::endl;
                    }
                    else
                    {
                        std::cout << "ERROR\n";
                    }
                }
                std::cout << "Next choice: ";
                break;
            case 'q':
                std::cout << "Bye!\n";
                flag = false;
                break;
            default :
                break;
        }
    }
    while (flag);

    return 0;
}
