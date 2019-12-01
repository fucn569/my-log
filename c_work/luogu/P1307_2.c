#include <stdio.h>
int main()
{
    int a, b=0;
    scanf("%d",&a);
    while(a)
    {
        b = b * 10 + a % 10;
        a /= 10;
    }
    printf("%d", b);
    return 0;
}
