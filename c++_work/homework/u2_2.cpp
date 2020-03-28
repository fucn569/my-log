#include <iostream>
using namespace std;
class Complex
{
    public:
		Complex();
		Complex (double x, double y);
		Complex (Complex & c);        //?复制(可省略)
		~ Complex ();                 //?析构（可省略）
		double GetRel() { return rel;}
		double GetImg() { return img;}
    private:
		double rel, img;
};
Complex::Complex()
{
    rel=0; img=0;
	cout<<"缺省构造函数被调用: ";
    cout<<"("<<rel<<","<<img<<")"<<endl;
}
Complex::Complex(double x, double y)
{
    rel=x; img=y;
	cout<<"构造函数被调用:  ("<<rel<<","<<img<<")"<<endl;
}
Complex::Complex(Complex & c)
{
    rel = c.rel;
	img = c.img;
	cout<<"复制构造函数被调用: ";
    cout<<"("<<rel<<","<<img<<")"<<endl;
}
Complex::~ Complex ()
{
    cout<<"析构函数被调用:  ("<<rel<<","<<img<<")"<<endl;
}
//函数定义
Complex fun(Complex c)
{
    cout<<"在函数 fun()中."<<endl;
	double x, y;
	x=c.GetRel()*10;
	y=c.GetImg()+100;
	Complex temp(x, y);
	return temp;
}
int main()
{
	Complex c1(6.8, 98.23),c2;
	c2=fun(c1);                         //? 复制了两次
                                        //?析构了三个类
	cout<<"c2=("<<c2.GetRel()<<",";  //? 再次构造和析构
    cout<<c2.GetImg()<<")"<<endl;
    return 0;
    system("pause");
}
