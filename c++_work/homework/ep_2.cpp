#include <iostream>
using namespace std;
const int MaxSize = 10;
class Array_int
{
private:
	int length;
	int data[MaxSize];
public:
	Array_int();//?相当于初始化操作，一个空数组，长度为0
	Array_int(int a[], int n);//?用给定的长度为n的数组a初始化数据成员
	void Display();//?显示所有数组元素

	void Insert(int x);//?将给定的元素x插入到数组中后，仍保持数组的有序性；
    //?需要判断插入新元素会不会发生存储空间的溢出情况，若发生溢出提示插入操作失败；
    //?插入过程中，插入位置确定后，从插入位置至最后一个元素全部往后移一位，给新插入元素空出插入位置。

	void Delete(int x);//?从数组中删除指定元素x，后面的元素全部要往前移一位；
    //?做删除前需要判断数组是否为空，若为空表，则删除操作失败

	int Search(int x);//?从数组中查找指定元素x，若查找成功返回元素在数组中位置，查找失败返回特定值-1
};
Array_int::Array_int()  //空数组
{
	length = 0;
	data[length] = 0;
}
Array_int::Array_int(int a[], int n)  //传入数组和长度
{
	int i;
	length = n;
	for (i = 0; i < n;i++)
	{
		data[i] = a[i];
	}
}
void Array_int::Display()  //输出
{
	cout << "display:" << endl;
	int i;
	for (i = 0; i < length;i++)
	{
		cout << data[i] <<" ";
	}
	cout << endl;
}
void Array_int::Insert(int x)//插入
{
	cout << "insert:" <<x<< endl;
	int temp,i,temp2;
	length = length + 1;     //先改变长度
	if(length>10)
	{
		cout << "fail!" << endl;
	}
	else
	{
	temp = data[x];
	cin >> data[x];
	for (i = x + 1; i < length;i++) //后移
	{
		temp2 = data[i];
		data[i] = temp;
		temp = temp2;
	}
	}
}
void Array_int::Delete(int x)   //删除
{
	cout << "delete:" <<x<< endl;
	int i;
	length = length - 1;   //先改变长度
	if(length<0)
	{
		cout << "fail!" << endl;
	}
	else
	{
	for (i = x; i < length; i++)   //前移
	{
		data[i] = data[i+1];
	}
	}
}
int Array_int::Search(int x)   //搜索
{
	int i,m;
	for (i = 0; i < length;i++)
	{
		if (x == data[i])
		{
			m = 1;
			return i;
			break;
		}
		else
		{
			m = 0;
		}
	}
	if(m==0)
	{
		return -1;
	}
}
int main()
{
	int a[6]={1,2,3,4,5,6},p,p1,p2;
	int sea;
	Array_int b(a, 6);
	b.Display();
	cin >> p1;
	b.Insert(p1);
	b.Display();
	cin >> p2;
	b.Delete(p2);
	b.Display();
	cin>> sea;
	p=b.Search(sea);
	cout << "position: " << p << endl;
	system("pause");
	return 0;
}
