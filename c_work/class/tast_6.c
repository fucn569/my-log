//? 绝对值fabs()    10的负6次方：1e-6

#include <stdio.h>
#include <math.h>
int main()
{
    int num=0,sign=1;
    float sum=1,a=1,b=1;
    while(fabs(b)>= 1e-6)
    {
        a += 2;
        sign = sign * -1;
        b = sign/ a;
        sum = sum + b;
        num++;
    }
    sum = sum * 4;
    printf("%8f\n", sum);
    printf("%d", num);
    system("pause");
    return 0;
}
