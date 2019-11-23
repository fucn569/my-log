#include <stdio.h>
#define N  5
int main()
{
    int score[N];       /* 数组定义语句 */
    int i,sum=0;
    float aver;
    printf("Input %d numbers:\n",N);
    for (i=0; i<N; i++)
    {
    scanf("%d",&score[i]);  /* 输入数组元素 */
    sum=sum+score[i];
    }
    aver=sum/N;           /* 计算平均分 */
    printf("\nThe average score is:%.1f", aver);
    system("pause");
    return 0;
}
