#include <iostream>
using namespace std;
class Complex
{
public:
    Complex( ){real=0;imag=0;}
    Complex(double r, double i=0){real=r; imag=i;}

    double Real()const{ return real;}
    double Imag()const{ return imag;}
    double Abs()const;

    //算术运算运算符重载
    friend Complex operator+(const Complex &l, const Complex &r);
    friend Complex operator-(const Complex &l, const Complex &r);
    friend Complex operator*(const Complex &l, const Complex &r);
    friend Complex operator/(const Complex &l, const Complex &r);
    //流输入输出运算符重载
    friend istream& operator>> (istream& sin , Complex& r);
    friend ostream& operator<< (ostream& sout, const Complex& r);

    //关系运算符重载
    bool operator==(const Complex& r)const;
    bool operator!=(const Complex& r)const;

    //类型转换运算符
    operator double(){return real;}

    void display( );
private:
    double real;
    double imag;
};
Complex operator+(const Complex &l, const Complex &r)
{
    return Complex(l.real+r.real, l.imag+r.imag);
}
Complex operator-(const Complex &l, const Complex &r)
{
    return Complex(l.real-r.real, l.imag-r.imag);
}
Complex operator*(const Complex &l, const Complex &r)
{
    return Complex(l.real*r.real-l.imag*r.imag, l.imag*r.real+l.real*r.imag);
}
Complex operator/(const Complex &l, const Complex &r)
{
    return Complex((l.real * r.real + l.imag * r.imag) / (r.real * r.real + r.imag * r.imag),
                   (l.imag * r.real - l.real * r.imag) / (r.real * r.real + r.imag * r.imag));
}
bool Complex:: operator==(const Complex& r)const
{
    if(real==r.real&&imag==r.imag)
    {
        return true;
    }
    return false;
}
bool Complex:: operator!=(const Complex& r)const
{
    if(r.real!=real||r.imag!=imag)
    {
        return true;
    }
}
void Complex::display( ){         //定义输出函数
    cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
/*int main( ) {
    Complex c1(3,4),c2(5,-10),c3;  //定义3个复数对象
    c3 = c1-c2;               //调用复数相加函数
    cout<<"c1="; c1.display( );    //输出c1的值
    cout<<"c2="; c2.display( );    //输出c2的值
    cout<<"c1+c2="; c3.display( ); //输出c3的值
    return 0;
}运算*/
int main( ) {
    Complex c1(3,4),c2(3,5);
    if(c1==c2)
    {
        cout << "c1==c2" << endl;
    }
    else
    {
        cout << "c1!=c2" << endl;
    }
    return 0;
}
