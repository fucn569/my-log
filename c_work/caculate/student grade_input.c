//todo 待修改

#include <stdio.h>
int main()
{
    int i,N=3,sum=0,aver;
    int a,b;

    for(i=0;i<N;i++)
{
    printf("Please input student's grade:");
    scanf("%d",&a);
    printf("Please input student's ID:");
    scanf("%d",&b);
    sum +=a;    //!程序刚刚开始出现aver=0因为sum未初始化就放在等号右侧
    if (a>=80)
{
    printf("\t%d\t%d\n",a,b);
}
}
    aver = sum / i;
    printf("\n\taver=%d\n",aver);
    system("pause");
    return 0;
}
