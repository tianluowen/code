// date: 2020-03-16
// desc: 测试 static

#include <iostream>

class Account 
{
public:
    static void set_rate(const double& x) 
    { m_rate = x;}
    void print(void)
    {
        std::cout << "m_rate = " << m_rate << std::endl;
    }
private:
    static double m_rate;
};

double Account::m_rate;
// double Account::m_rate = 9.0;

int main(void)
{
    Account* a = new Account();
    Account::set_rate(3.0);
    std::cout << "Account::set_rate(3.0), ";
    a->print();

    a->set_rate(9.0);
    std::cout << "a->set_rate(9.0), ";
    a->print();

    return 0;
}

// 确实需要定义，不然的话没法使用
