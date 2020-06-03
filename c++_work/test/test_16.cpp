#include <iostream>
#include <ostream>
using namespace std;

//长方形类
class Rect
{
public:
    Rect(int length, int width):m_length(length),m_width(width){};
    void setSize(int length, int width); //设置长和宽
    int getlength(){
        return m_length;
    };
    int getwidth(){
        return m_width;
    };
    int area();                          //求面积
	void display();                      //显示长方形信息
private:
	int m_length;
	int m_width;
};
//设置长和宽
void Rect::setSize(int length, int width)
{
	m_length = length;
	m_width = width;
}
//求面积
int Rect::area()
{
	return m_length * m_width;
}
//显示长方形信息
void Rect::display()
{
	cout << "length = " << m_length << endl;
	cout << "width = " << m_width << endl;
	cout << "area = " << area() << endl;
}

//立方体类
class Cube: public Rect
{
public:
    Cube(int length, int width, int height) : Rect(length, width),m_height(height){};
    void setHeight(int height);   //设置高
	int volume();                 //求体积
	void display();               //显示立方体信息
    friend ostream& operator<<(ostream&, Cube&);
private:
	int m_height;
};
ostream& operator<<(ostream& sout, Cube& r)
{
    sout <<  "length = " << r.getlength() << endl
    <<"width = " << r.getwidth() << endl
    <<"area = " << r.area() << endl
    << "height = " << r.m_height<< endl
    << "volume = " << r.volume() << endl;
    return sout;
}
//设置高
void Cube::setHeight(int height)
{
	m_height = height;
}
//求体积
int Cube::volume()
{
	return area() * m_height;
}
//显示立方体信息
void Cube::display()
{
	cout << "height = " << m_height<< endl;
	Rect::display();    //----------------------------------(1)
	cout << "volume = " << volume() << endl;
}
int main()
{
	Cube cube(10,15,20);
	cout << cube;
	system("pause");
	return 0;
}


