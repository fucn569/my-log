#include <stdio.h>
int main()
{
    int fac(int n);
    int n, y;
    printf("Please input:");
    scanf("%d", &n);
    y = fac(n);
    printf("n!=%d", y);
    return 0;
}
int fac(int n)    //注意溢出
{
    int f;
    if(n<0)
        printf("error!");
    else if(n==0||n==1)
        f = 1;
    else
        f = fac(n - 1) * n;      //? 过程：n减到1达到递归破除条件  然后开始执行returnn次
    printf("%4d\n", n);
    return f;
}
