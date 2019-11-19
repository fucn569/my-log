#include <stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2];
    int i,j;
    printf("a:\n");
    for (i = 0; i < 2;i++)
    {
        for (j = 0; j < 3;j++)
        {
            printf("%5d", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("\nb:\n");
    for (j = 0; j < 3;j++)
    {
        for (i = 0; i < 2;i++)
        {
            printf("%5d",b[j][i]);//!有问题！
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
