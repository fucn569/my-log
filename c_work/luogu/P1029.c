#include <stdio.h>
int main()
{
    int a, b;
    while(1)
    {
        scanf("%d %d", &a, &b);
        if(a>=2&&a<=1000000&&b>=2&&b<=1000000)
            break;
    }
    int p, q;
    int p1, q1;
    int num=0,i;
    int r = 1;
    for (q = sqrt(a*b); q <= b;q++)
    {
        for (p = 2; p <= sqrt(a*b); p++)
        {
            p1 = p;
            q1 = q;
            r = 1;
            while(r!=0)
            {
                    if (p1 < q1)
                    {
                        i = p1;
                        p1 = q1;
                        q1 = i;
                    }
                    r = p1 % q1;
                    p1 = r;
            }
            if(a==q1&&(a*b)==(p*q))
            {
                num+=2;
            }
        }
    }
    printf("%d", num);
    system("pause");
    return 0;
}
