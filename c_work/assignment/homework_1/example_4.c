#include <stdio.h>
int main()
{
    int c1, c2;
    c1 = 97;
    c2 = 98;
    printf("c1=%c,c2=%c\n",c1,c2);
    printf("c1=%d,c2=%d\n",c1,c2);
    system("pause");
    return 0;
}
/*1.结果为：         原因：char类型对应ASC码，可以以字符或数字输出
    c1=a,c2=b
    c1=97,c2=98
  2.更改后：
    c1=?c2=?
    c1=-59,c2=-58   原因：ASC码仅仅有128个197和198超出范围
  3.结果为：
    c1=a,c2=b
    c1=97,c2=98     原因：int类型与char类型在范围内等价




    */
