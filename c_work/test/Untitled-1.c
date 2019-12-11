#include <stdio.h>
#include <math.h>
int main()
{
    int n=100,i,r,j;
    for (i = 1; i <=n;i++)
    {
        if(i==1||i==2||i==3)
        {
            printf("%d\n",i);
        }
        else
        {
            for (j = 2; j <= sqrt(i);j++)
            {
                r = i % j;
                if(r==0)
                {
                    break;
                }
            }
            if(r!=0)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
