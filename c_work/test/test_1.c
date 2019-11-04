#include <stdio.h>
int main()
{
    int a=1;
    double b = 5.0;
    a = a / 2;
    b = b / 2;
    printf("%d\n",a);    //整型除法自动去小数
    printf("%.0f\n",b);  //浮点型自动进一

    /*float a;
    a = 1;                  开始float竟然输出01.000000，应该是出现bug最好使5输入为5.0
    printf("%f",a);*/

    printf("%d\n", sizeof(b));   //链接变量后还可以看变量类型
    system("pause");
    return 0;
}
