#include <stdio.h>
int main()
{
    float a, b, c, mid;         //mid为中间值
    float x1, x2;               //定义根
    float p, q;                 //定义根系数
    printf("please input the coefficient:");
    scanf("a=%f,b=%f,c=%f",&a,&b,&c);
    mid = b*b- 4 * a * c;
    if(a==0)
        {
            printf("The input is not qewou.");
        }
    else if(mid>=0)
    {
        x1 = (-b + sqrt(mid) )/ (2 * a);
        x2 = (-b - sqrt(mid)) / (2 * a);
        printf("x1=%7.2f\nx2=%7.2f\n", x1, x2);
    }
    else if(mid<0)
    {
        p = -b / (2 * a);
        q = sqrt(-mid) / (2 * a);
        printf("x1=%7.2f  +%7.2fi",p,q);
        printf("\nx2=%7.2f  -%7.2fi\n",p,q);
    }
    system("pause");
    return 0;
}
