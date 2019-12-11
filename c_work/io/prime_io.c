#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    FILE *fp,*fp2;
    int *p;
    int n,i,r,j,m=0;
    if((fp=fopen("input.dat","r"))==NULL)
    {
        printf("error!");
        exit(0);
    }
    if((fp2=fopen("output","w"))==NULL)
    {
        printf("error!");
        exit(0);
    }
    fscanf(fp, "%d", &n);
    p = (int *)malloc(n * 5*sizeof(int));
    for (i = 2; i <=n;i++)
    {
        if(i==2||i==3)
        {
            *(p+m)=i;
            m++;
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
                *(p+m)=i;
                m++;
            }
        }
    }
    realloc(p, m * 5*sizeof(int));
    for (i = 0; i < m;i++)
        fprintf(fp2, "%d\n", *(p+i));
    fclose(fp);
    fclose(fp2);
    return 0;
}
