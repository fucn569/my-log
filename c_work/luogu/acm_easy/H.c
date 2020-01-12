#include <stdio.h>
int main()
{
    int c(int n);
    int a,n;
    scanf("%d", &n);
    a = c(n);
    printf("%d", a);
    return 0;
}
int c(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return n=n * c(n-1);
    }
}
