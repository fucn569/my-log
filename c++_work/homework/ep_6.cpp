#include <iostream>
using namespace std;

//声明抽象基类Shape
class Shape
{
public:
    virtual float area() const =0;         //纯虚函数
    virtual void display() const =0;         //纯虚函数
};
class Circle : public Shape
{
public:
    Circle(float r):radius(r){};
    void setRadius(float r);

   //对虚函数area进行重定义
    virtual float area( ) const;

   //对纯虚函数进行再定义
    virtual void display() const;

private:
    float x;
    float y;
    float radius;
};

void Circle::setRadius(float r)
{
    radius = r;
}

float Circle::area( ) const {return 3.14159*radius*radius;}
void Circle::display( ) const
{
    cout << "Circle:"<<endl
        << "r="<< radius << endl;
}

class Rect : public Shape
{
public:
    Rect(int length, int width):m_length(length),m_width(width){};
    void setSize(int length, int width); //设置长和宽
    virtual float area( ) const;
	virtual void display() const;      //显示长方形信息
protected:
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
float Rect::area() const
{
	return m_length * m_width;
}
//显示长方形信息
void Rect::display() const
{
    cout << "Rect:" << endl;
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
	virtual float area( ) const;
	virtual void display() const;
private:
	int m_height;
};
//设置高
void Cube::setHeight(int height)
{
	m_height = height;
}
float Cube::area() const
{
    return(m_length*m_width*2+m_height*m_width*2+m_length*m_height*2);
}
//显示立方体信息
void Cube::display() const
{
    cout << "Cube:" << endl;
    cout << "length = " << m_length << endl;
	cout << "width = " << m_width << endl;
    cout << "height = " << m_height<< endl;
	cout << "area = " << area() << endl;
}
int main()
{
	Shape *shape[3];
	shape[0] = new Circle(10);
	shape[1] = new Rect(10, 20);
	shape[2] = new Cube(10, 20, 30);
	for (int i = 0; i < 3; i++) {
		shape[i]->display();
		cout << "------------------" << endl;
	}
	system("pause");
	return 0;
}

