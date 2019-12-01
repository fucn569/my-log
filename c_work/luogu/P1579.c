/*仅有一行，输出3个质数，这3个质数之和等于输入的奇数。相邻两个质数之间用一个空格隔开，
最后一个质数后面没有空格。如果表示方法不唯一，请输出第一个质数最小的方案，
如果第一个质数最小的方案不唯一，请输出第一个质数最小的同时，第二个质数最小的方案。*/
#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int i,r,m;
    int num1, num2, num3;
    int judge(int x);
    for (num1 = 2; num1 < input;num1++)
    {
        r = 1;
        for (i = 2; i <= sqrt(num1);i++)
        {
            r = num1 % i;
            if(r==0)
            {
                break;
            }
        }
        if(r==0)
            {
                continue;
            }
        for (num2 = 2; num2 < input;num2++)
        {
            for (i = 2; i <= sqrt(num2);i++)
        {
            r = num2 % i;
            if(r==0)
            {
                break;
            }
        }
        if(r==0)
            {
                continue;
            }
        num3 = input - num1 - num2;
        m = judge(num3);
        if(m==1)
        {
            continue;
        }
        else
        {
            break;
        }
        }
    if(m==0)
        break;
    }
    printf("%d %d %d", num1, num2, num3);
    system("pause");
    return 0;
}

int judge(int x)
{
    int m=0,r,i;
    if(x<2)
        {
            m = 1;
        }
    for (i = 2; i <= sqrt(x);i++)
    {
        r = x % i;
        if(r==0)
        {
            m=1;
            break;
        }
    }
    return m;
}
