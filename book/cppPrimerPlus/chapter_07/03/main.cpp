// date: 2020-02-21
// desc: 编写函数操作结构体

#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void printStructBox(box st);
void setStructBoxMemberVolume(box* pst);

int main(int argc, char *argv[])
{
    box boxinfo = {
        "长方体",
        3.14,
        2.18,
        3.14
    };

    printStructBox(boxinfo);
    setStructBoxMemberVolume(&boxinfo);
    std::cout << std::endl;
    printStructBox(boxinfo);

    return 0;
}


void printStructBox(box st)
{
    std::cout << "st.maker is " << st.maker << "\nst.height = " << st.height << "\nst.width = " << st.width 
        << "\nst.length = " << st.length << "\nst.volume = " << st.volume << std::endl;
}

void setStructBoxMemberVolume(box* pst)
{
    pst->volume = pst->height * pst->width * pst->length;
}


