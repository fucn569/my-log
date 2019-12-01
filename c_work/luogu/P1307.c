#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d", &a);
    if(a<10&&a>-10)
    {
        printf("%d", a);
    }
    else if(a>=10)
    {
        for (i = 1; pow(10, i) < a;i++)
            ;
        i = i - 1;
        b = a / pow(10, i);
        for (j = i-1; j >= 0;j--)
        {
            c = a / pow(10, j);
            b = b + (c % 10)*pow(10,i-j);
        }
        printf("%d", b);
    }
    else
    {
        a = abs(a);
        for (i = 1; pow(10, i) < a;i++)
            ;
        i = i - 1;
        b = a / pow(10, i);
        for (j = i-1; j >= 0;j--)
        {
            c = a / pow(10, j);
            b = b + (c % 10)*pow(10,i-j);
        }
        printf("%d", -b);
    }
    system("pause");
    return 0;
}
