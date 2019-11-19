#include <stdio.h>
int main()
{
    int a = 3, b = 60;
    int p1, q1,r,i,num=0;
    p1 = 15;
    q1 = 12;
    while (r != 0)
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
            if(a==q1&&(a*b)==(15*12))
            {
                num++;
            }
}
