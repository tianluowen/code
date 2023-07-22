// date: 2020-04-16
// desc: 

#include <iostream>

using namespace std;

const int Max = 5;

// function prototypes
double* fill_arry(double* begin, int limit);
void show_array(const double* begin, const double* end); // don't change date
void revalue(double r, double* begin, double* end);


int main(int argc, char *argv[])
{
    double properties[Max];

    double* end = fill_arry(&properties[0], Max);
    show_array(properties, end);
    if (end > properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))  // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            
            cout << "Bad input; Please enter a number: ";
        }

        revalue(factor, properties, end);
        show_array(properties, end);
    }

    return 0;
}

double* fill_arry(double* begin, int limit)
{
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value $" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0) // signal to terminate
            break;
        *begin++ = temp;
    }

    return --begin;
}

void show_array(const double* begin, const double* end) // don't change date
{
    for (int i = 0; begin <= end; i++, begin++)
    {
        cout << "Propery #" << (i + 1) << ": $";
        cout << *begin << endl;
    }
}


void revalue(double r, double* begin, double* end)
{
    
    for (int i = 0; begin <= end; i++, begin++)
    {
        *begin *= r;
    }
}

