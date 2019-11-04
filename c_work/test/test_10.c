#include <stdio.h>
int main()
{
    int a = 2;
    a /= 2;            //等价于a=a/2
    /*a%=2;
    a-=2;也行
    */
    printf("%d\n",a);
    printf("%d\n",5 > 8);   //输出0错
    printf("%d\n",8 > 5);   //输出非0真
    system("pause");
    return 0;
}
