#include <stdio.h>
#include <math.h>
int main()
{
    int a,i;
    scanf("%d", &a);
    for (i = 0; a > pow(10,i);i++)
        ;
    void output(int x,int n,int r);
    output(a,i-1,1);
    system("pause");
    return 0;
}
char a[10];
void output(int x,int n,int r)
{
    if(r==1)
    {
        a[n + 1] = '\0';
    }
    if(n<0)
    {
        printf("%s\n", a);
    }
    else
    {
        a[n] =(x % 10)+48;
        output(x / 10, n - 1,2);
    }
}
