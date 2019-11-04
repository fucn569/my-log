#include <stdio.h>
int main()
{
    int num=1,a;
    num += 5;              //num=num+5
    num++;                 //num=num+1
    printf("num=%d\n",num);
    a=++num;               //先加法再赋值
    printf("a=%d\n",a);
    a = num++;             //先赋值再加法
    printf("a=%d\n",a);
    printf("num=%d\n",num);
    return 0;
}
