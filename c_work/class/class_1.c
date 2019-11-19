#include <stdio.h>
#define N 3
int main()
{
    int matrix[N][N];
    int sum=0;
    int i, j;
    printf("Please input the matrix:");
    for (i = 0; i < N;i++)
    {
        for (j = 0; j < N;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Your matrix is:\n");
    for (i = 0; i < N;i++)
    {
        sum += matrix[i][i];
        for (j = 0; j < N;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("sum=%d\n",sum);
    system("pause");
    return 0;
}
