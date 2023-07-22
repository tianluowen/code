// 时间：2019年10月21日09:08:29
// 目的：使用三个函数输出一段字符串

#include <iostream>

void print1(void);
void print2(void);

int main(int argc, char *argv[])
{
    using namespace std;

    print1();
    print1();
    print2();
    print2();

    return 0;
}

void print1(void)
{
    using namespace std;
    cout << "Three blind mice" << endl;
}

void print2(void)
{
    using namespace std;
    cout << "See how they run" << endl;
}
