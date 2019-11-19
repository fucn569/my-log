#include <stdio.h>
int main()
{
    float average(float array[],int n); //!括号内是形参
    float score[5], aver;
    int i;
    printf("input n scores:\n");
    for (i=0; i<5; i++) {
        scanf("%f", &score[i]);
    }
    printf("\n");
    aver = average(score,5);    //! 调用函数时score,n是实参（常量变量表达式）
    printf("average score is %5.2f\n",aver);
    return 0;
}
float average(float array[],int n)
{
    int i;
    float aver, sum = array[0];
    for (i = 1; i < n;i++)
        aver = sum / n;
    return aver;
}
