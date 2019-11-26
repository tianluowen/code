C++ Primer Plus （第二版） 第二章 课后习题

01 编写一个 C++ 程序，它显示您的姓名和地址。

02 编写一个 C++ 程序，它要求用户输入一个以 long 为单位的距离，然后将它转换为码（一 long 等于 220 码）。

03 编写一个 C++ 程序，它使用 3 个用户定义的函数 (包括 main())，并生成下面的输出：
    Three blind mice
    Three blind mice
    See how they run
    See how they run
    其中一个函数要调用两次，该函数生成前两行；另一个函数也别调用两次，并生成其余的输出。

04 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
    Enter your age:29
05 编写一个程序，其中的 main() 调用一个用户定义的爱函数（以摄氏温度值为参数，并返回相应的华氏温度值）。该程序按下面的格式要求用户输入摄氏温度值，并显示结果:
    Please enter a Celsius value:20
    20 degress Celsius is 68 degrees Fahreheit.
    下面是转换公式:
    华氏温度 = 1.8 × 摄氏温度 + 32.0

06 编写一个程序，其 main() 调用一个用户定义的函数（以光年值为参数，并返回对应天文单位的值）。该程序按下面的格式要求用户输入光年值，并显示结果:
    Enter the number of light years:4.2
    4.2 light years = 265608 astronomical units.
    天文单位是从地球到太阳的平均距离（约 150000000 公里或 93000000 英里），光年是光一年走的距离（约 10 万亿公里或 6 万亿英里）（除太阳外，最近的恒星大约离地球 4.2 光年）。请使用 double 类型（参见程序清单 2.4），转换公式为:
    1 光年 = 63240 天文单位

07 编写一个程序，要求用户输入小时数和分钟数。在 main() 函数中，将这两个数值传递给一个 void 函数，后这以下面这样的格式显示这两个值:
    Enter the number of hours:9
    Enter the number of minutes:28
    Time:9:28
    