01 编写一个 C++程序，如下述输出示例所示那样请求并显示信息：

​    What is your first name? Betty Sue

​	What is your last name? Yewe

​	What letter grade do you deserve? B

​	What is your age? 22

​	Name: Yewe, Betty Sue

​	Grade: C 

​	Age: 22

​	注意，该程序应该就收的名字包含多个单词。另外，程序将乡下调整成绩，即向上调一个字母。假设用户请求 A、B 或 C，所以不必担心 D 和 F 之间的空挡。

02 修改程序清单 4.4，使用 C++string 类而不是 char 数组。

03 编写一个程序，它要求用户首先输入其名，在输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。请使用 char 数组和头文件 cstring 中的函数。下面是该程序运行时的情形：

​    Enter your first name: Flip

​    Enter your last name: Fleming

​    Here's the information in a single string:Fleming, Flip

04 编写一个程序，它要求用户首先输入其名，在输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。请使用 string 对象和头文件 string 中的函数。先面试该程序运行时的情形：

​    Enter your first name: Flip

​    Enter your last name: Fleming

​    Here's the information in a single string:Fleming, Flip

05 结构 CandyBar 包含 3 个成员。第一个成员存储了糖块的品牌；第二个成员存储糖块的重量（可以有小数）；第三个成员存储了糖块的卡路里含量（整数）。请编写一个程序，声明这个结构，创建一个名为 snack 的 CandyBar 数组，并将其成员变量分别初始化为 “Mocha Munch”、2.3 和 350。初始化应在声明 snack 时进行。最后，程序显示 snack 变量的内容。

​    
