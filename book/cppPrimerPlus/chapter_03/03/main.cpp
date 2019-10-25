// 时间：2019年10月25日13:29:31
// 目的：转换输入的度分秒纬度

#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    const int Trans = 60; 
    int idegress;
    int iminutes;
    int iseconds;
    float fdegress; 

    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> idegress;
    cout << "Next, enter the minutes of arc: ";
    cin >> iminutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> iseconds;
    
    fdegress = (float)iseconds / Trans / Trans + (float)iminutes / Trans + idegress;
    
    cout << endl << idegress << " degress, " << iminutes << " minutes, " << iseconds << " seconds = " << fdegress << " degrees\n";
    
    return 0;
}
