#include <stdio.h>
#include <math.h>
int main()
{
    float d=300000,p=6000;       //d为贷款数目，p为每月还款
    float r = 0.01,m=0;         //r为利率，m为应还月份
    m = log10(p / (p - d * r)) / log10(1 + r);
    printf("%.1f",m);
    system("pause");
    return 0;
}
