#include <stdio.h>
#define PI 3.14
#define S(r) PI*r*r
int main()
{
    double a=3,b=3,area1,area2;
    area1=S(a);
    area2=S(a+b)
    printf("%f,%f",area1,area2);
    system("pause");
    return 0;
}