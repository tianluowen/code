// date: 2019-11-25 20:11
// desc: 判断输入多少个单词

#include <iostream>
#include <string.h>

int main(int argc, char *argv[])
{
    char word[100];
    int wordnumber = 0;

    std::cout << "Enter words (to stop, type the word done) : \n";
    while (1)
    {
        std::cin >> word;
        if (strcmp(word, "done") == 0)
        {
            break;
        }

        wordnumber++;
    }

    std::cout << "You entered a total of " << wordnumber << " words." << std::endl;

    return 0;
}
