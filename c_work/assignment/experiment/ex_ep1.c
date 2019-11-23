//用选择法对10个整数按升序排序
#include <stdio.h>
#define N 10
int main()
{
    int  i,j,min,temp;
    static int a[N]={5,4,3,2,1,9,8,7,6,0};
	printf("\nThe array is:\n");   /* 输出数组元素 */

    for (i=0;i<N;i++)
        printf("%5d",a[i]);

    for (i=0;i<N-1;i++)     	   /* 排序操作 */
    {
        min =i;
        for (j=i+1; j<N; j++)
        {
	        if(a[min]>a[j])
            {
                min =j;     //和指针很像
                temp = a[i]; /* 数据交换 */
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nThe sorted numbers: \n");  /* 输出排序结果 */
    for (i=0; i<N; i++)
        printf("%5d",a[i]);
    printf("\n");
    system("pause");
    return 0;
}
