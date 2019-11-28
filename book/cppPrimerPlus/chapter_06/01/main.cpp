// date: 2019-11-28 18:44
// desc: 从键盘接受输入，判断字符类型

#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
    std::cout << "Enter text for analysis, and type @"
        "to terminate input.\n";

    char ch;

    std::cin.get(ch);
    while (ch != '@')
    {
        if (!isdigit(ch))
        {
            if (islower(ch))
            {
                ch = toupper(ch);
            }
            else if (isupper(ch))
            {
                ch = tolower(ch);
            }

            std::cout << ch;
        }

        std::cin.get(ch);
    }
    std::cout << std::endl;
    
    return 0;
}
