// date: 2019-12-05 19:29
// desc: 判断输入的字符串有多少个辅音和元音

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[])
{
    std::string strword;
    int countvowel = 0;
    int countconsonant = 0;
    int countother = 0;

    std::cout << "Enter words (q to quit):\n";
    std::cin >> strword;
    while (strword != "q")
    {
        if (isalpha(strword[0]))
        {
            switch (strword[0])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    countvowel++;
                    break;
                default:
                    countconsonant++;
                    break;
            }
        }
        else
        {
            countother++;
        }
        std::cin >> strword;
    }

    std::cout << countvowel << " words beginning with vowels\n";
    std::cout << countconsonant << " words beginning with consonants\n";
    std::cout << countother << " others\n";

    return 0;
}
