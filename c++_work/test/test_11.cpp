#include <iostream>
using namespace std;
class A
{
public:
    A(int i):h(i){ }  //?必须在初始化表中对常量数据成员h初始化

    int Counter()const{
        cnt++;
    }
    void out(){
        cout << h << endl;
    }
    void change(int i)
    {
        h = i;  //! 发生矛盾，const 不能改变
    }
    private:
        mutable int cnt;
        const int h;
};
int main()
{
    A a(1);
    a.out();
    return 0;
    A b(a);
    b.out();

}
