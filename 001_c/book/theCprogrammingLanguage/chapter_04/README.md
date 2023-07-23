## 这是第四章课后习题

**01** 编写函数 strrindex(s, t) ,它返回字符串 t 在 s 中最右边出现的位置。如果 s 中不包含 t，则返回 -1。

**02** 对 atof 函数进行扩充，使它可以处理形如<br \>
　　123.45e-6

**03** 在有了基本框架后，对计算器程序进行扩展就比较简单了，在该程序中加入去模(%)运算符，并注意考虑负数的情况。

**04** 在栈的操作中添加几个命令，分别用于在不弹出元素的情况下打印寨顶元素；复制栈顶元素；交换栈顶两个元素的值。另外增加一个命令用于清楚空栈。

**05** 给计算器程序增加访问 sin、exp 与 pow 等库函数的操作。有关这些库函数的详细信息，参见附录 B.4 节中的头文件 <math.h>。

**06** 给计算机程序增加变量处理命令（提供 26 个具有单个英文字母变量名的变量容易）。增阿基一个变量存放最近打印的值。

**07** 编写一个函数 ungets(s)，将整个字符串 s 压回到输入中。ungets 函数需要使用 buf 和 bufp 吗？它能否仅使用 ungetch 函数。

**08** 假定最多只压回一个字符。请相应地修改 getch 与 ungetch 这两个函数。

**09** 以上介绍的 getch 与 ungetch 函数不能正确地处理压回的 EOF，考虑压回 EOF 时如何处理，请实现你的设计方案。

**10** 另一种方法是通过 getline 函数读入整个输入行，这中情况下可以不使用 getch 与 ungetch 函数。请用这一方法修改计算机程序。

**11** 修改 getop 函数，使其不必使用 ungetch 函数。提示：可以使用一个 static 类型的内部变量解决该问题。

**12** 运用 printd 函数的设计思想编写一个递归版本的 itoa 函数，既通过递归调用把整数转换为字符串。

**13** 编写一个递归版本的 reverse(s) 函数，以将字符串 s 倒置。

**14** 定义宏 swap(t, x, y) 以交换 t 类型的两个参数。(使用程序块结构回对你有所帮助)。