#include <stdio.h>
int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    else
        return gcb(b, a % b);
}
int main()
{
    int a, b, t;
    int gcd(int a, int b);
    scanf("%d%d", &a, &b);
    printf("%d", gcb(a, b));
    return 0;
}
//https://blog.csdn.net/qq_40427276/article/details/81267650

