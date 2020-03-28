#include<iostream>
#include<string>
using namespace std;
int main()
{
    class Circle{
public:
    Circle();  //默认构造函数
    void SetPosition(float x, float y);  //设置圆形位置
    void SetRadius(float r);  //设置圆形半径
    void Draw();  //绘制圆形
private:
    float x_position;  //圆形的中心x坐标
    float y_position; //圆形的中心y坐标
    float radius; //圆的半径
};
    class Rectangle{
public:
    Rectangle();  //默认构造函数
    void SetPosition(float x, float y);  //设置矩形位置
    void SetRadius(float a,float b);  //设置矩形长宽
    void Draw();  //绘制矩形
private:
    float x_position;  //矩形的中心x坐标
    float y_position; //矩形的中心y坐标
    float a,b; //矩形的长宽
};
    class Ellipse{
public:
    Ellipse();  //默认构造函数
    void SetPosition(float x, float y);  //设置圆心位置
    void SetRadius(float a,float b);  //设置椭圆长短半轴
    void Draw();  //绘制椭圆
private:
    float x_position;  //圆心x坐标
    float y_position; //圆心y坐标
    float a,b; //椭圆长短半轴
};

    class Triangle{
public:
    Triangle();  //默认构造函数
    void SetPosition1(float x1, float y1);  //设置三点位置
    void SetPosition2(float x2,float y2);
    void SetPosition3(float x3,float y3);
    void Draw();  //绘制三角形
private:
    float x1_position,y1_position;  //三点位置
    float x2_position,y2_position;
    float x3_position,y3_position;
};

    class Quadrilateral{
public:
    Quadrilateral();  //默认构造函数
    void SetPosition1(float x1, float y1);  //设置四点位置
    void SetPosition2(float x2,float y2);
    void SetPosition3(float x3,float y3);
    void SetPosition4(float x4,float y4);
    void Draw();  //绘制四边形
private:
    float x1_position,y1_position;  //四点位置
    float x2_position,y2_position;
    float x3_position,y3_position;
    float x4_position,y4_position;
};
    class A_digital_clock{
public:
    A_digital_clock();  //默认构造函数
    void set_minute(); //设置分
    void set_hour();//设置小时
    void set_date();//设置日期
    void Draw();  //绘制
private:
    float minute;  //数据
    float hour;
    float date;
};

    class A_home_thermostat{
public:
    A_home_thermostat();  //默认构造函数
    void set_power(); //设置功率
    void set_swing(); //设置旋转方式
    void set_on_off();//设置开关
    void Draw();  //绘制
private:
    float power;  //功率
    float swing;  //旋转方式
    float on_off; //开关
};
    class A_digital_timer{
public:
    A_digital_timer();  //默认构造函数
    void set_second(); //设置秒
    void set_minute(); //设置分
    void set_hour();//设置小时
    void set_on_off();//设置开关
    void Draw();  //绘制
private:
    float second;  //数据
    float minute;
    float hour;
    float on_off;  //开关
};
class A_MP3_player{
public:
    A_MP3_player();  //默认构造函数
    void set_control(); //设置暂停
    void set_songs();//设置歌曲
    void set_on_off();//设置开关
    void Draw();  //绘制
private:
    float control;  //是否播放
    float songs;   //播放歌曲
    float on_off;  //开关
};
    return 0;
}
