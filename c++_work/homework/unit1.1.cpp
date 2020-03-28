/*题目：设计一个函数模板，
其作用是对传入的一个数组进行排序（由小到大），
数组中元素类型可以是int，double，string等数据类型中的一种。
现已给出主函数及函数模板的调用，要求实现函数模板Sort()，Print()，
使给出的主函数能正确运行。*/
#include <iostream>
using namespace std;
template <class T1>
void Sort(T1 a[],int b) //* 传入数组和长度
{
    int i,j;
    for (i = 0; i < b;i++)  //* 排序
    {
        for (j = i + 1; j < b;j++)
        {
            if (a[i]>a[j])
            {
                T1 temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
template <class T2>
void Print(T2 a[],int b)
{
    int i;
    for (i = 0; i < b;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    string Str[10] = {"Zhang", "Li", "Wang", "Qian", "Zhao",
        "Wu", "Xu", "Tang", "Shen", "Liang"};
    int Int[8]={20,12,0,-5,9,-18,6,11};
    double Dou[7]={3.07,8.12,-0.45,6,10,-9,7.29};
    Sort(Str,10);
    Sort(Int,8);
    Sort(Dou,7);
    Print(Str,10);
    Print(Int,8);
    Print(Dou,7);
    system("pause");
    return 0;
}
