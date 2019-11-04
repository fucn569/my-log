#include <stdio.h>
int main()
{
    float n=-1,m=1,sum=0;
    do
{
    n=n*(-1);
    sum=sum+n/m;
    m++;
}while(m<=100);
    printf("The result is:%f",sum);
    return 0;
}
