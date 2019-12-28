#include <stdio.h>
#include <math.h>
int main()
{
    int s, x,time;
    float rate=7,len;
    scanf("%d %d", &s, &x);
    for (len = 0,time=0; len < s - x;time++)
    {
        len = len + rate * pow(0.98, time);
    }
    if(len+rate*pow(0.98,time)>s+x)
        printf("n");
    else
        printf("y");
    return 0;
}
