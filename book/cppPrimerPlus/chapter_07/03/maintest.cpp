// date: 2020-02-27
// desc: 模仿一个类编写函数操作结构体

#include <iostream>
#include <string.h>

template<typedef T>
struct boxinfo
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

template<typedef T>
class box
{
private:
    boxinfo cuboidbox;

public:
    box(char* str, float height, float width, float length) 
    {
        strcpy(cuboidbox.maker, str);
        cuboidbox.height = height;
        cuboidbox.width = width;
        cuboidbox.length = length;
    }
    void printStructBox(void)
    {
        std::cout << "cuboidbox.maker is " << cuboidbox.maker << "\ncuboidbox.height = " << cuboidbox.height << "\ncuboidbox.width = " << cuboidbox.width 
            << "\ncuboidbox.length = " << cuboidbox.length << "\ncuboidbox.volume = " << cuboidbox.volume << std::endl;
    }

    void setStructBoxMemberVolume(void)
    {
        cuboidbox.volume = cuboidbox.height * cuboidbox.width * cuboidbox.length;
    }
};


/* void printStructBox(box st); */
/* void setStructBoxMemberVolume(box* pst); */

int main(int argc, char *argv[])
{
    box *cuboid = new box("长方体", 3.13, 2.15, 3.48);

    cuboid->printStructBox();
    cuboid->setStructBoxMemberVolume();
    cuboid->printStructBox();

    /* printStructBox(boxinfo); */
    /* setStructBoxMemberVolume(&boxinfo); */
    /* std::cout << std::endl; */
    /* printStructBox(boxinfo); */

    return 0;
}




