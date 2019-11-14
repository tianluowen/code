// 时间：2019-11-14 20:52
// 目的：定义一个结构体数组，从键盘接受数据初始化，然后输出

#include <iostream>
#include <string>

struct Pizza
{
    char name[20];
    float diameter;
    float weight;
};

int main(int argc, char *argv[])
{
    using namespace std;

    Pizza pizzas[3]; 

    cout << "请输入第一个 pizzas.name = ";
    /* cin >> pizzas[0].name; */
    cin.getline(pizzas[0].name, 20);
    cout << "请输入第一个 pizzas.diameter = ";
    cin >> pizzas[0].diameter;
    cout << "请输入第一个 pizzas.weight = ";
    cin >> pizzas[0].weight;
    
    cout << "请输入第二个 pizzas.name = ";
    cin.getline(pizzas[1].name, 20);
    /* cin >> pizzas[1].name; */
    cout << "请输入第二个 pizzas.diameter = ";
    cin >> pizzas[1].diameter;
    cout << "请输入第二个 pizzas.weight = ";
    cin >> pizzas[1].weight;
    
    cout << "请输入第三个 pizzas.name = ";
    cin.getline(pizzas[2].name, 20);
    /* cin >> pizzas[2].name; */
    cout << "请输入第三个 pizzas.diameter = ";
    cin >> pizzas[2].diameter;
    cout << "请输入第三个 pizzas.weight = ";
    cin >> pizzas[2].weight;

    cout << endl;
    cout << "pizzas[0].name = " << pizzas[0].name << endl;
    cout << "pizzas[0].diameter = " << pizzas[0].diameter << endl;
    cout << "pizzas[0].weight = " << pizzas[0].weight << endl;
    cout << "pizzas[1].name = " << pizzas[1].name << endl;
    cout << "pizzas[1].diameter = " << pizzas[1].diameter << endl;
    cout << "pizzas[1].weight = " << pizzas[1].weight << endl;
    cout << "pizzas[2].name = " << pizzas[2].name << endl;
    cout << "pizzas[2].diameter = " << pizzas[2].diameter << endl;
    cout << "pizzas[2].weight = " << pizzas[2].weight << endl;

    return 0;
}
