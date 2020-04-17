// date: 2020-04-16
// desc: 重写程序清单 7.15

#include <iostream>

using namespace std;

const int Seasons = 4;
const char* Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct expenses
{
    double data[Seasons];
};

// function prototypes
void fill(expenses& date);
void show(expenses date);

int main(int argc, char *argv[])
{
    expenses data;
    fill(data);
    cout << endl;
    show(data);

    return 0;
}

void fill(expenses& data)
{
    double temp;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: "; 
        cin >> temp;
        data.data[i] = temp;
    }
}

void show(expenses data)
{
    double total = 0.0;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << data.data[i] << endl;
        total += data.data[i];
    }

    cout << endl << "Total Expenses: $" << total << endl;
}
