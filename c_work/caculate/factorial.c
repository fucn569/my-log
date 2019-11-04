/*int recursive(int i)
{
    int sum = 0;
    if (0 == i)
        return (1);
    else
        return i * recursive(i-1);
}*/
#include <stdio.h>
int main (void)
{
    int i,a;
    long c;
    c=1;i=1;
    printf("Please input a natual number:");
    scanf("%d",&a);

    while(i<=a)
    {
        c=c*i;
        i=i+1;
    }
    printf("%d's factorial is:%ld\n",a,c);
    return 0;
}

