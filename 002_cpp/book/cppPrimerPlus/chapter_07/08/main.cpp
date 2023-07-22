// date: 2020-04-16
// desc: 重写程序清单 7.15

#include <iostream>

using namespace std;

const int Seasons = 4;
const char* Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

// function prototypes
void fill(double* p);
void show(double* p);



int main(int argc, char *argv[])
{
    double expenses[Seasons];
    fill(expenses);
    cout << endl;
    show(expenses);

    return 0;
}

void fill(double* p)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: "; 
        cin >> p[i];
    }
}

void show(double* p)
{
    double total = 0.0;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << *(p + i) << endl;
        total += *(p + i);
    }

    cout << endl << "Total Expenses: $" << total << endl;
}
