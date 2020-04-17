// date: 2020-04-17
// desc: 

# include <iostream>

using namespace std;



double add(double x, double y)
{
    return x + y;
}

double subtraction(double x, double y)
{
    return x - y;
}

double multiplication(double x, double y)
{
    return x * y;
}

double division(double x, double y)
{
    return x / y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
    return (*pf)(x, y);
}

int main()
{
    double q;
        
    cout << "a = 2.5, b = 10.4" << endl;
    q = calculate(2.5, 10.4, add);
    cout << "add : " <<  q << endl;
    q = calculate(2.5, 10.4, subtraction);
    cout << "subtraction : " <<  q << endl;
    q = calculate(2.5, 10.4, division);
    cout << "division : " <<  q << endl;
    q = calculate(2.5, 10.4, multiplication);
    cout << "multiplication : " <<  q << endl;

    return 0;
}
