#include <stdio.h>
int main()
{
    int r, l;
    printf("Please input the row and line.\n");
    scanf("%d %d", &r, &l);
    int mat1[r][l],mat2[l][r];
    void product(int r,int l,int (*mat1)[l]);
    void turn(int r, int l, int(*mat1)[l],int(*mat2)[r]);
    product(r, l, mat1);
    turn(r, l, mat1,mat2);
    system("pause");
    return 0;
}
void product(int r,int l,int (*mat1)[l])
{
    int i,j;
    printf("Please input the matrix:\n");
    for (i = 0; i < r ;i++)
    {
        for(j = 0; j <l;j++)
            scanf("%d", &*(*(mat1+i)+j));
    }
    for (i = 0; i < r ;i++)
    {
        for(j = 0; j <l;j++)
            printf("%5d", *(*(mat1+i)+j));
        printf("\n");
    }
}
void turn(int r, int l, int(*mat1)[l],int(*mat2)[r])
{
    int i,j;
    printf("The original matrix is:\n");
    for (i = 0; i < r ;i++)
    {
        for(j = 0; j <l;j++)
            printf("%5d", *(*(mat1+i)+j));
        printf("\n");
    }
    for (i = 0; i < r ;i++)
    {
        for(j = 0; j <l;j++)
        {
            *(*(mat2 + j) + i) = *(*(mat1 + i) + j);
        }
    }
    printf("The exchanged matrix is:\n");
    for (i = 0; i < l ;i++)
    {
        for(j = 0; j <r;j++)
            printf("%5d", *(*(mat2+i)+j));
        printf("\n");
    }
}
