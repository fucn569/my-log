#include <iostream>
using namespace std;
class Student                                    //声明基类
{
public:                                             //公用部分
    Student(int n, string nam )             //基类构造函数
    {
        num=n;
        name=nam;
    }
    void display( )                                //成员函数，输出基类数据成员
    {cout<<"num:"<<num<<endl<<"name:"<<name<<endl;}
protected:                                         //保护部分
    int num;
    string name;
};
class Student1: public Student              //声明公用派生类Student1
{
public:
    Student1(int n, string nam, int n1, string nam1, int a, string ad)
      :Student(n,nam),monito(n1,nam1)                 //派生类构造函数
    {
        age=a;
        addr=ad;}
    void show( );
    void show_monito( );                        //成员函数，输出子对象
private:                                               //派生类的私有数据
    Student monito;                              //!定义子对象(班长)
    int age;
    string addr;
};
void Student1::show( )
{
    cout<<"This student is:"<<endl;
    display();                             //调用基类成员函数，输出num和name
    cout<<"age: "<<age<<endl;                       //输出age
    cout<<"address: "<<addr<<endl<<endl;     //输出addr
}
void Student1:: show_monito( )
{
    cout<<endl<<"Class monitor is:"<<endl;
    monito.display( );                                      //调用基类成员函数
}
int main( )
{
    Student1 stud1(10010,"Wang-li",10001,"Li-sun",19,
                            "115 Beijing Road,Shanghai");
    stud1.show( );                           //输出学生的数据
    stud1.show_monito();                //输出子对象的数据
    return 0;
}

