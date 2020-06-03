#include "String.h"
#include <istream>

using namespace std;
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
    int i,j;
    for (i = 0; i < l.Size();i++)
    {
        c[i] = l[i];
    }
    for (j = 0; j < r.Size(); j++,i++)
    {
        c[i] = r[j];
    }
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
