#include <iostream>
#include <string.h>
using namespace std;
class String{
public:
    String( ){p = NULL;}     //默认构造函数
    String(char *str);       //参数构造函数
    String(const String& s); //复制构造函数
    ~String();               //析构函数

    int  Size()const{ return p ? strlen(p) : 0; }
    bool Empty()const{ return (p==0 || strlen(p)==0);}

    operator char*()const{return p;} //类型转换函数
    const String& operator=(const String& s); //赋值操作符

    //其它运算符
    friend String operator+(const String& l, const String& r);
    friend bool operator> (const String& l, const String& r);
    friend bool operator==(const String& l, const String& r);
    friend istream& operator>>(istream& sin, String& r);
    friend ostream& operator<<(ostream& sout, const String& r);

private:
    char *p; //字符型指针，用于指向String存储的字符串
};
//参数构造函数
String::String(char* c)
{
    if(c)
    {
       p = new char[strlen(c)+1];
       strcpy(p, c);
    }
    else
       p = NULL;
}

//复制构造函数
String::String(const String& s) {
    if(!s.Empty())
    {
       p = new char[s.Size()+1];
       strcpy(p, s);
    }
    else
       p = NULL;
}

//析构函数
String::~String() {
   if(p)
     delete [] p;
}
//赋值操作符
const String& String::operator=(const String& s)
{
    if(this != &s)
    {
        if(p)
           delete [] p;
        p = new char [s.Size()+1];
        strcpy(p, s);
    }

    return *this;
}
//重载+运算符
String operator+(const String& l, const String& r)
{
    char* c = new char[l.Size()+r.Size()+1];
    strcpy(c, l);
    strcat(c, r);
    String s(c);
    delete [] c;

    return s;
}
//提取操作
istream& operator>>(istream& sin, String& r)
{
   char c[256];
   sin >> c;;
   r = String(c);
   return sin;
}

//插入操作
ostream& operator<<(ostream& sout, const String& r)
{
   sout << r.p;
   return sout;
}
//重载关系运算符
bool operator>(const String& l, const String& r) {
    return (strcmp(l.p, r.p) > 0);
}
bool operator==(const String& l, const String& r){
    return (strcmp(l.p, r.p) == 0);
}

//其它4个关系运算符可以由> 和==导出
bool operator!=(const String& l, const String& r){
    return !(l==r);
}
bool operator<(const String& l, const String& r){
    return !(l>r) && (l!=r);
}
bool operator>=(const String& l, const String& r){
    return !(l<r);
}
bool operator<=(const String& l, const String& r){
    return !(l>r);
}
int main()
{
    String str1, str2, str3, temp;
    cout<<"please input three strings:"<<endl;
    cin>>str1>>str2>>str3;

    cout << "str1+str2=" << str1+str2 << endl;

    if(str2 > str3){
       temp=str2; str2=str3; str3=temp;
    }

    if(str1 <= str2)
       cout<<str1<<" "<<str2<<" "<<str3<<endl;
    else if(str1 <= str3)
       cout<<str2<<" "<<str1<<" "<<str3<<endl;
    else
       cout<<str2<<" "<<str3<<" "<<str1<<endl;

    return 0;
}
