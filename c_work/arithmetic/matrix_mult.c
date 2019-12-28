#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, col,rc;
    int i,j,m,n;
    printf("Please input row and col:\n");
    scanf("%d %d %d",&row,&rc,&col);
    int martix_1[row][rc];
    int martix_2[rc][col];
    int martix_3[row][col];
    printf("Please input the martix_1:\n");
    for (i = 0; i < row;i++)
    {
        for (j = 0; j < rc;j++)
        {
            scanf("%d", &martix_1[i][j]);
        }
    }
    printf("Please input the martix_2:\n");
    for (i = 0; i < rc;i++)
    {
        for (j = 0; j < col;j++)
        {
            scanf("%d", &martix_2[i][j]);
        }
    }
    for (i = 0; i < row;i++)
    {
        for (j = 0; j < col;j++)
        {
            martix_3[i][j] = 0;
            for (m = 0; m < rc;m++)
            {
                martix_3[i][j] =martix_3[i][j]+martix_1[i][m] * martix_2[m][j];
            }
        }
    }
    printf("martix_3 is:\n");
    for (i = 0; i < row;i++)
    {
        for (j = 0; j < col;j++)
        {
            printf("%5d", martix_3[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
