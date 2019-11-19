#include <stdio.h>
#define n 3  //输入奇数
int main()
{
    int N = n*n;
    int cube[N][N];
    int k,i=1,j;
    for (i = 1; i <= n;i++)
    {
        for (j=1; j<=n; j++) {
            cube[i][j] = 0;
        }
    }
    j = n / 2 + 1;
    cube[1][j] = 1;
    for (k = 2; k <=N;k++)
    {
        i--;
        j++;
        if(i<1&&j>n)
        {
            i = i + 2;
            j = j - 1;
        }
        else
        {
            if(i<1)
                i = n;
            if(j>n)
                j = 1;
        }
        if(cube[i][j]==0)
            cube[i][j] = k;
        else
        {
            i = i + 2;  //!对应开始的i-- 和 j++
            j = j - 1;
            cube[i][j] = k;
        }
    }
    for (i = 1; i <= n;i++)
    {
        for (j=1; j<=n; j++) {
            printf("%5d", cube[i][j]);
        }
        printf("\n");
    }
        system("pause");
    return 0;
}

