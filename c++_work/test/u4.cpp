#include <iostream>
using namespace std;
class Complex  //Complex类定义
{
public:
    Complex( ){real=0;imag=0;}   //默认构造函数
    Complex(double r,double i)   //构造函数重载
    {real=r; imag=i;}
    //声明重载运算符的函数
    Complex operator+(const Complex &r)const;
    void display( );             //声明输出函数

private:
    double real;                 //实部
    double imag;                 //虚部
};
Complex Complex::operator+(const Complex &r)const
{
    Complex c;
    c.real = real + r.real;
    c.imag = imag + r.imag;
    return c;
}

void Complex::display( ){         //定义输出函数
    cout<<"("<<real<<","<<imag<<"i)"<<endl;
}

int main( ) {
    Complex c1(3,4),c2(5,-10),c3;  //定义3个复数对象
    c3 = c1+c2;               //调用复数相加函数
    cout<<"c1="; c1.display( );    //输出c1的值
    cout<<"c2="; c2.display( );    //输出c2的值
    cout<<"c1+c2="; c3.display( ); //输出c3的值
    return 0;
}
