#include <stdio.h>
/*
 * 从较小的数据本身到1去找其约数 与此同时判断是否公约数
 * 这样第一次所找到的公约数为最大公约数
*/
int maxGcd(int min,int max)
{
    int i;
    for(i=min;i>0;i--)
    {
       //表达式短路
       if(min%i==0 && max%i==0)
       {
           return i;
       }
    }
}

int main(void)
{
    int a,b,ret;

    printf("Please input two integers:");
    scanf("%d%d",&a,&b);

    if(a<b)
    {
       ret=maxGcd(a,b);
    }
    else
    {
       ret=maxGcd(b,a);
    }
    printf("%d and %d largest common divisor:%d\n",a,b,ret);
    return 0;
}
