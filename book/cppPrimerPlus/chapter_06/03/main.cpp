// date: 2019-12-01 21:04
// desc: 文本化的菜单栏

#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Please enter one of the following choices:\n";
    std::cout << "c) carnivore          p) pianist\n";
    std::cout << "t) tree               g) game\n";
    
    std::cout << "Please enter a c, p, t, or g: ";
    
    char ch;
    bool flag = true;
    do {
        std::cin >> ch;

        switch(ch)
        {
            case 'c':
                std::cout << "A maple is a carnivore.\n";
                flag = false;
                break;
            case 'p':
                std::cout << "A maple is a pianist.\n";
                flag = false;
                break;
            case 't':
                std::cout << "A maple is a tree.\n";
                flag = false;
                break;
            case 'g':
                std::cout << "A maple is a game.\n";
                flag = false;
                break;
            default :
                std::cout << "Please enter a c, p, t, or g: ";
                break;
        }
    }
    while (flag);

    return 0;
}
