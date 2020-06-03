#include <iostream>
#include <cmath>
using namespace std;
class Frac
{
public:
    void reduction();//*约分
    void reciprocal();//*倒数

    friend Frac operator+(const Frac& l, const Frac& r);
    friend Frac operator-(const Frac& l, const Frac& r);
    friend Frac operator*(const Frac& l, const Frac& r);
    friend Frac operator/(const Frac& l, const Frac& r);

    friend bool operator> (const Frac& l, const Frac& r);
    friend bool operator< (const Frac& l, const Frac& r);
    friend bool operator>= (const Frac& l, const Frac& r);
    friend bool operator<= (const Frac& l, const Frac& r);
    friend bool operator==(const Frac& l, const Frac& r);
    friend bool operator!= (const Frac& l, const Frac& r);

    friend istream& operator>>(istream& sin, Frac& r);
    friend ostream& operator<<(ostream& sout, const Frac& r);

private:
    int numerator;
    int denominator;
};
void Frac::reduction()
{
    int temp,i,j;
    i = abs(numerator);
    j = abs(denominator);
    if(i<j)
    {
        temp = i;
        i = j;
        j = temp;
    }
    temp = i % j;
    while(temp!=0)
    {
        i = temp;
        if(i<j)
        {
            temp = i;
            i = j;
            j = temp;
        }
        temp = i % j;
    }
    numerator = numerator / j;
    denominator = denominator / j;
};
void Frac::reciprocal()
{
    int temp;
    temp = numerator;
    numerator = denominator;
    denominator = temp;
}
Frac operator*(const Frac& l, const Frac& r)
{
    Frac t;
    t.numerator = l.numerator * r.numerator;
    t.denominator = l.denominator * r.denominator;
    t.reduction();
    return t;
}
Frac operator/(const Frac& l, const Frac& r)
{
    Frac t;
    t.numerator = l.numerator * r.denominator;
    t.denominator = l.denominator * r.numerator;
    t.reduction();
    return t;
}
Frac operator+(const Frac& l, const Frac& r)
{
    Frac t;
    t.numerator = l.numerator * r.denominator+l.denominator*r.numerator;
    t.denominator = l.denominator * r.denominator;
    t.reduction();
    return t;
}
Frac operator-(const Frac& l, const Frac& r)
{
    Frac t;
    t.numerator = l.numerator * r.denominator-l.denominator*r.numerator;
    t.denominator = l.denominator * r.denominator;
    t.reduction();
    return t;
}
bool operator> (const Frac& l, const Frac& r)
{
    if(l.numerator*r.denominator-l.denominator*r.numerator>0)
    {
        return true;
    }
    else
        return false;
}
bool operator< (const Frac& l, const Frac& r)
{
    if(l>r)
    {
        return false;
    }
    else
        return true;
}
bool operator==(const Frac& l, const Frac& r)
{
    if(l.numerator*r.denominator-l.denominator*r.numerator==0)
    {
        return true;
    }
    else
        return false;
}
bool operator!=(const Frac& l, const Frac& r)
{
    if(l==r)
    {
        return false;
    }
    else
        return true;
}
bool operator>= (const Frac& l, const Frac& r)
{
    if(l>r||l==r)
    {
        return true;
    }
    else
        return false;
}
bool operator<= (const Frac& l, const Frac& r)
{
    if(l>=r)
    {
        return false;
    }
    else
        return true;
}
istream& operator>>(istream& sin, Frac& r)
{
    int n, d;
    char c;
    sin >> n >> c >> d;
    if(d==0)
    {
        cout << "error!" << endl;
        exit(0);
    }
    r.numerator = n;
    r.denominator = d;
    return sin;
}
ostream& operator<<(ostream& sout, const Frac& r)
{
    sout << r.numerator << "/" << r.denominator;
    return sout;
}
int main()
{
    Frac a, b, c, d, e, f, g;
    cout << "Input please:" << endl;
    cin >> a >> b;
    c = a + b;
    cout << a << "+" << b << "=" << c << endl;
    d = a - b;
    cout << a << "-" << b << "=" << d << endl;
    e = a * b;
    cout << a << "*" << b << "=" << e << endl;
    f = a / b;
    cout << a << "/" << b << "=" << f << endl;
    if(a>b)
        cout << a << ">" << b << endl;
    else
        cout << a << ">" << b << " error" << endl;
    if(a<b)
        cout << a << "<" << b << endl;
    else
        cout << a << "<" << b << " error" << endl;
    if(a>=b)
        cout << a << ">=" << b << endl;
    else
        cout << a << ">=" << b << " error" << endl;
    if(a<=b)
        cout << a << "<=" << b << endl;
    else
        cout << a << "<=" << b << " error" << endl;
    if(a==b)
        cout << a << "==" << b << endl;
    else
        cout << a << "==" << b << " error" << endl;
    if(a!=b)
        cout << a << "!=" << b << endl;
    else
        cout << a << "!=" << b << " error" << endl;
    a.reciprocal();
    cout << "a's redreciprocal:" << a << endl;
    system("pause");
    return 0;
}
