// 时间：2019年11月05日13:17:41
// 目的：如题形式接受信息并输出

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    // 定义变量
    const int ArSize = 40;
    char name[ArSize];
    char surname[ArSize];
    char grade;
    int age;
    
    // 接受输入
    cout << "What is your first name? ";
    cin.getline(surname, ArSize);
    cout << "What is last name? ";
    cin.getline(name, ArSize);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    // 输出结果
    grade += 1;
    cout << "Name: " << name << ", " << surname << endl; 
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}
