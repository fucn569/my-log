#include <iostream>
using namespace std;

class Box
{
public:
    Box(int h=10,int w=10,int l=10);
    Box(int x, int y);
    Box();
    int volume( );
    void out(){
        cout << height << endl
            << length << endl
            << width << endl;
    }
private:
    int height;
    int width;
    int length;
};
Box::Box(int h, int w, int l)
{
    height = h;
    width  = w;
    length = l;
}
Box::Box(int x, int y)
{
    height = x;
    width  = y;
}
Box::Box()
{
    cout << "haha" << endl;
}
int main()
{
    Box a; //!引发歧义1    默认构造与默认参数的构造函数产生矛盾
    Box a(100, 100); //!引发歧义2     默认参数的构造函数与参数构造函数产生矛盾
    a.out();
    return 0;
}
