#include <iostream>
using namespace std;
class Complex
{
public:
    Complex( ){real=0;imag=0;}
    Complex(double r, double i){real=r;imag=i;}
    //声明重载运算符的函数
    Complex operator+(const Complex &r)const;
    void display( );

private:
    double real;
    double imag;
};
//定义重载运算符的函数
Complex Complex::operator+(const Complex &r)const
{
    Complex c;
    c.real = real + r.real;
    c.imag = imag + r.imag;
    return c;
}

void Complex::display( )
{
    cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
int main( )
{
    cin.get();
    Complex c1(3,4),c2(5,-10),c3;
    c3 = c1 + c2;   //运算符+用于复数运算
    cout<<"c1="; c1.display( );
    cout<<"c2="; c2.display( );
    cout<<"c1+c2="; c3.display( );

    return 0;
}

