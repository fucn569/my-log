#include <iostream>
using namespace std;
class CComplex
{
public:
	CComplex()
	{
		real = 0.0;
		imag = 0.0;
	}
	CComplex(float x, float y)
	{
		real = x;
		imag = y;
	}
	friend CComplex operator + (CComplex &obj1, CComplex &obj2)//?改为友元函数，+是双目运算符，作为成员函数本身就有一个操作数，不能再传入两个个操作数
	{
		CComplex obj3(obj1.real + obj2.real, obj1.imag + obj2.imag);
		return obj3;
	}
	friend CComplex &operator++(CComplex &obj) //?改为友元函数，++是单目运算符，作为成员函数本身就有一个操作数，不能再传入一个操作数
	{
		++obj.real;
		++obj.imag ;
		return obj;
	}
    friend CComplex &operator--(CComplex &x); //?需要在类中声明且--是单目运算符，作为成员函数本身就有一个操作数，不能再传入一个操作数，需要改为友元函数
    void print()
	{
		cout<<real<<"+"<<imag<<"i"<<endl;
	}
private:
	float real;
	float imag;
};
    CComplex &operator--(CComplex &x)  //重载前置自减运算符
    {
	--x.real;
	--x.imag;
	return x;
    }

int main()
{
	CComplex obj1(2.1,3.2);
	CComplex obj2(3.6,2.5);
	cout<<"obj1=";
	obj1.print();
	cout<<"obj2=";
	obj2.print();
	CComplex obj3 = obj1 + obj2;
	cout<<"before++, obj3=";
	obj3.print();
	++obj3;
	cout<<"after++, obj3=";
	obj3.print();
	--obj3;
	cout<<"after--, obj3=";
	obj3.print();
	CComplex obj4 = ++obj3;
	cout<<"obj4=";
	obj4.print();
return 0;
}

