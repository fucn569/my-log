#include <fstream>
#include <iostream>
using namespace std;

    class Student{
public:
    Student(string na, int no, int a, char s):name(na),num(no),age(a), sex(s){}
    string name;
    int num;
    int age;
    char sex;
    };
    void display() {
    Student stud[3] = {Student("Li", 1001, 18, 'f'),
                     Student("Fun", 1002, 19, 'm'),
                     Student("Wang", 1004, 17, 'f')};
    ofstream outfile("f1.dat",ios::out);     //打开磁盘文件"f1.dat"
    if(!outfile)                                       //如果打开失败，outfile返回0值
    {
        cerr<<"open error!"<<endl;
        exit(1);
    }

    for (int i = 0; i < 3; i++) {
        outfile<<stud[i].name<<" "<<stud[i].num<<" "<<stud[i].age<<" "<<stud[i].sex<<endl;
    }                                        //向磁盘文件"f1.dat"输出数据
    outfile.close();
        }
int main()
{
    display();
    return 0;
}
