// 时间：2019年10月21日16:46:53
// 目的：将身高英尺转换为英尺和英寸

#include <iostream>

int main(int argc, char *argv[])
{
   using namespace std;

   const int Convnumber =  12; 
   int iheight;
   int ifoot;
   int iinch;

   cout << "请输入你的身高（单位英寸，整数）：_____\b\b\b\b";
   cin >> iheight;

   ifoot = iheight / Convnumber;
   iinch = iheight % Convnumber;
   cout << "你的身高为 " << ifoot << " 英尺, " << iinch << " 英寸。" << endl;

   return 0;
}
