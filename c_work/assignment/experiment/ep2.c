#include <stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("\nInput 10 numbers:\n");
    for (i=0; i<10;i++) 					/* 数组输入 */
        scanf("%d", &a[i]);
    for (i=1; i<10; i++)
        b[i]=a[i]+a[i-1];                    	/* 计算b数组中的元素 */
    for (i=1; i<10; i++)
    {
        printf("%3d",b[i]);
        if (i%3==0)
        printf("\n");  	/* 每行打印3个数据 */
    }
    system("pause");
    return 0;
}
