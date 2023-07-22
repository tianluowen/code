**01** 编写一个程序，不断要求用户输入两个数，直到其中一个为 0。对于没两个数，程序将使用一个函数来计算它们的调和平均数，并将结果返回给 main(), 而后者将报告结果。调和平均数指的是倒数平均值的倒数，计算公式如下：  
调和平均数=2.0 * x * y / (x + y)

**02** 编写一个程序，要求用户输入最多 10 个高尔夫成绩，并将其存储在一个数组中。程序允许用户提早结束输入，并在一行上显示所有成绩，然后报告平均成绩。请使用 3 个数组处理函数来分别进行输入，显示和计算平均成绩。

**03** 下面是一个结构声明：  

```cpp
strct box  
{  
　　char maker[40];  
　　float height;  
　　float width;  
　　float length;  
　　float volume;  
}  
```

a. 编写一个函数，按值传递 box 结构，并显示每个成员的值。  
b. 编写一个函数，传递 box 结构的地址，并将 volume 成员设置为其他三维长度的成绩。  
c. 编写一个使用这两个函数的简单程序。  

**04** 许多州的彩票发行机构都是用如程序清单 7.4 所示的简单彩票玩法的变体。在这些玩法中，玩家从一组被称为域号码（field number）的号码中选择几个。例如，可以从域号码 1\~47 在中选择 5 个号码：还可以从第二个区间（如 1\~27）选择一个号码（称为特选号码）。要赢得头奖，必须正确猜中所有的号码。中奖的几率是选中所有域号码的几率与选中特选号码几率的乘积。例如，在这个例子中，中头奖的几率是从 47 个号码中正确选取 5 个号码的几率与从 27 个号码中正确选择 1 个号码的几率乘积。请修改程序清单 7.4，以计算中得这种彩票头奖的几率。

**05** 定义一个递归函数，接受一个整数参数，并返回该参数的阶乘。前面讲过，3 的阶乘写作 3!，等于 3\*2!，以此类推：而 0! 被定义为1。通用的计算公式是，如果 n 大于零，则 n!=n\*(n-1)!。在程序中对该函数进行测试，程序使用循环让用户输入不同的值，程序将包裹这些值的阶乘。

**06** 编写一个程序，它使用下列函数：  
　　Fill_array()将一个 double 数组的名称和长度作为参数。它提示用户输入 double 值，并将这些值存储到数组中。当数组被填满或用户输入了非数字时，输入将停止，并显示该数组的内容。  
　　Reversearry()将一个 doubel 数组的名称和长度作为参数，并将存储在数组中的值的顺序反转。  
　　程序将使用这些函数来填充数组，然后显示数组：反转数组，然后显示数组；反转数组中除第一个和最后一个元素之外的所有元素，然后显示数组。

**07** 修改程序清单 7.7 中的 3 个数组处理函数，使之使用两个指针参数来表示区间。fill_array()函数不反悔实际读取了多少个数字，而是返回一个指针，该指针指向最后被填充的位置：其他函数可以将该指针作为第二个参数，以标识数据结尾。

**08** 在不使用 array 类的情况下完成程序清单 7.15 所做的工作。编写两个这样的版本。  
　　a. 使用 const char \* 数组存储标示季度名称的字符串，并使用 double 数组存储开支。  
　　b. 使用 const char \* 数组存储表示季度名称的字符串，并使用一个结构，该结构只有一个成员---一个用于存储开支的 double 数组。这种设计与使用 array 类的基本设计类似。<br />

**09** 这个练习让您编写处理数组和结构的函数。下面是程序的框架，请提供其中秒数的安徽省农户，以完成该程序。  

```cpp
# include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and 
// stores data about students. It terminates input upon filling
// the array or upon encountering a blacnk line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n);

// display1() takes the address of student structre as an
// argument and displays the structure's contents
void display1(student st);

// display2() takes the address of student structure as an
// argument and displays the structure's contents
void display2(const student * ps);

// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n);

int mian()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}
```

**10** 设计一个名为 calculate() 的函数，它接受两个 double 值和一个指向函数的指针，而被指向的函数接受两个 double 参数，并返回一个 double 值。calculate() 函数的类型也是 double, 并返回被指向的函数使用 calculate() 的两个 double 参数计算得到的值。例如，假设 add() 函数的定义如下：  

```cpp
double add(double x, double y)
{
    return x + y;
}
```

则下述代码中的函数调用将导致 calculate() 把 2.5 和 10.4 传递给 add() 函数，并返回 add() 的返回值 （12.9）：  

```cpp
double q = calculate(2.5, 10.4, add);
```

请编写一个程序，它调用上述两个安徽省农户和至少另一个与 add() 类似的函数。该程序使用循环来让用户成对地输入数字。对于每个数字，程序都使用 calculate() 来调用 add() 和至少一个其它的函数。如果读者爱冒险，可以尝试创建一个指针数组，其中的指针指向 add() 样式的函数，并编写一个循环，使用这些指针连续让 calculate() 调用这些函数。提示：下面是声明这种指针数组的方式，其中包含三个指针：

```cpp
double (*pf[3])(double, double);
```
可以采用数组初始化语法，并将函数名作为地址来初始化这样的数组。

