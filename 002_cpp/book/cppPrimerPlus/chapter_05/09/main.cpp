// date: 2019-11-25 20:12
// desc: 在上一题中使用 string 对象而不是字符数组

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string word;
    int wordnumber = 0;

    std::cout << "Enter words (to stop, type the word done) : \n";
    while (1)
    {
        std::cin >> word;
        if (word == "done")
        {
            break;
        }

        wordnumber++;
    }

    std::cout << "You entered a total of " << wordnumber << " words." << std::endl;

    return 0;
}
