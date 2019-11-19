// date: 2019-11-18 13:47
// desc: 使用new来管理结构

#include <iostream>
#include <stdio.h>

struct Pizza
{
    char name[20];
    float diameter;
    float weight;
};

int main(int argc, char *argv[])
{
    using namespace std;

    // 申请空间
    Pizza *pizzas[3]; 
    pizzas[0] = new Pizza;
    pizzas[1] = new Pizza;
    pizzas[2] = new Pizza;
    
    cout << "请输入第一个 pizzas.diameter = ";
    cin >> pizzas[0]->diameter;
    cout << "请输入第一个 pizzas.name = ";
    getchar();
    cin.getline(pizzas[0]->name, 20);
    cout << "请输入第一个 pizzas.weight = ";
    cin >> pizzas[0]->weight;
    
    cout << "请输入第二个 pizzas.diameter = ";
    cin >> pizzas[1]->diameter;
    cout << "请输入第二个 pizzas.name = ";
    // 使用getchar 的原因是 输入 weight 后会有一个回车，如果不处理这个字符则跳过cin.getline
    getchar();
    cin.getline(pizzas[1]->name, 20);
    cout << "请输入第二个 pizzas.weight = ";
    cin >> pizzas[1]->weight;
    
    cout << "请输入第三个 pizzas.diameter = ";
    cin >> pizzas[2]->diameter;
    cout << "请输入第三个 pizzas.name = ";
    getchar();
    cin.getline(pizzas[2]->name, 20);
    cout << "请输入第三个 pizzas.weight = ";
    cin >> pizzas[2]->weight;
    
    cout << endl;
    cout << "pizzas[0]->diameter = " << pizzas[0]->diameter << endl;
    cout << "pizzas[0]->name = " << pizzas[0]->name << endl;
    cout << "pizzas[0]->weight = " << pizzas[0]->weight << endl;
    cout << "pizzas[1]->diameter = " << pizzas[1]->diameter << endl;
    cout << "pizzas[1]->name = " << pizzas[1]->name << endl;
    cout << "pizzas[1]->weight = " << pizzas[1]->weight << endl;
    cout << "pizzas[2]->diameter = " << pizzas[2]->diameter << endl;
    cout << "pizzas[2]->name = " << pizzas[2]->name << endl;
    cout << "pizzas[2]->weight = " << pizzas[2]->weight << endl;

    // 释放空间
    delete pizzas[0];
    delete pizzas[1];
    delete pizzas[2];

    pizzas[0] = NULL;
    pizzas[1] = NULL;
    pizzas[2] = NULL;

    return 0;
}
