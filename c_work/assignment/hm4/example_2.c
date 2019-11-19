#include <stdio.h>
int main()
{
    int m, n;
    printf("Please input the lenth(n) and the wide(m).n=?,m=?:\n");
    scanf("n=%d,m=%d",&n,&m);
    int A[n][m];
    int B[n][m];
    int C[n][m];
    int i, j;
    printf("Please input the A martix:\n");
    for (i = 0; i < n;i++)
    {
        for (j = 0; j < m;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Please input the B martix:\n");
    for (i = 0; i < n;i++)
    {
        for (j = 0; j < m;j++)
        {
            scanf("%d", &B[i][j]);
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("The new martix is:\n");
    for (i = 0; i < n;i++)
    {
        for (j = 0; j < m;j++)
        {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
