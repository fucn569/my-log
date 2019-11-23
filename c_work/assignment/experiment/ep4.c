/*求一个3X3矩阵主对角线元素之和。提示求a[0][0]+a[1][1]+a[2][2].*/
#include<stdio.h>
int main()
{
    int a[3][3];    /* 数组定义语句 */
    int i,sum=0;
    printf("\nPlease input data:\n");
    for (i=0;i<3;i++)
        scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);  /* 输入一行数组元素 */
    for (i=0;i<3;i++)
        printf("\n%d %d %d ",a[i][0],a[i][1],a[i][2]); /* 输出一行数据元素 */
    for (i=0;i<3;i++)
        sum =sum+a[i][i];           /* 计算对角线元素之和，提示i=i*/
    printf("\nThe data is :%d",sum);
    system("pause");
    return 0;
}
