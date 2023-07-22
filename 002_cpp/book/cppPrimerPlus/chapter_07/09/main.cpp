// date: 2020-04-17
// desc: 编写三个输出函数，分别以不同的方式打印接收到的信心

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

int main()
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

int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "输入第 " << i + 1 << " 个学生的信息: " << endl;
        cout << "请输入 fullname: ";
        cin.getline(pa[i].fullname, SLEN);
        cout << "请输入 hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "请输入 ooplevel: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }

    return i;
}

void display1(student st)
{
    cout << "用对象的方式输出该学生的各种信息:" << endl;
    cout << "fullname: " << st.fullname << endl;
    cout << "hobby: " << st.hobby << endl;
    cout << "ooplevel: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << "用指针的方式输出该学生的各种信息:" << endl;
    cout << "fullname: " << ps->fullname << endl;
    cout << "hobby: " << ps->hobby << endl;
    cout << "ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    cout << "输出所有学生的各种信息:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "第 " << i + 1 << " 个学生" << endl;
        cout << "fullname: " << pa[i].fullname << endl;
        cout << "hobby: " << pa[i].hobby << endl;
        cout << "ooplevel: " << pa[i].ooplevel << endl;
    }
}
