#include<iostream>
using namespace std;
class A
{
public:
	A(int x=100,double y=1.2){a=x;b=y;}
	void show(string pt)
	{	cout<<pt<<":"<<endl;
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
	}
private:
	int a;
	double b;
};
int main()
{
A obj1,obj2(100,3.5);
	obj1.show("obj1");
	obj2.show("obj2");
	A *p;
	p=&obj1;
	p->show("p->obj1");
	(*p).show("(*p)obj1");
	p=&obj2;
	p->show("p->obj2");
    (*p).show("(*p)obj2");
    p = new A;
    p->show("p->new");
	delete p;
    system("pause");
    return 0;
}
