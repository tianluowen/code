// date: 2020-04-15
// desc: 编写三个函数

#include <iostream>

using namespace std;

int Fill_arry(double arry[], int count);
void Show_arry(double arry[], int count);
void Reverse_arry(double arry[], int count);

const int MAX_SIZE = 5;

int main(int argc, char *argv[])
{

    double arry[MAX_SIZE];
    int count;

    count = Fill_arry(arry, MAX_SIZE);
    Show_arry(arry, count);
    Reverse_arry(arry, count);
    Show_arry(arry, count);

    return 0;
}

int Fill_arry(double arry[], int count)
{
    int i;
    double d;
    for (i = 0; i < count; i++)
    {
        cin >> d;
        // 如果 流接受错误
        if (!cin)
        {
            break; 
        }
        arry[i] = d;
    }

    return i;
}

void Show_arry(double arry[], int count)
{
    for (int i = 0; i < count; i++)
        cout << arry[i] << "\t";
    cout << endl;
}

void Reverse_arry(double arry[], int count)
{
    double tempdate;
    for (int begin = 1, end = count - 2; begin < end; begin++, end--)
    {
        tempdate = arry[begin];
        arry[begin] = arry[end];
        arry[end] = tempdate;
    }
}
