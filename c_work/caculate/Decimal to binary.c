#include <stdio.h>
int main()
{
    int num, rem = 0;
    printf("Please input a number:");
    scanf("%d",&num);
    while(num!=0)       //todo 添加一个递增变量、改变循环条件可以实现补位
    {
        rem = num % 2;
        printf("%d",rem);     //?怎么实现颠倒   详见Dtb（2）
        if(rem==0)
            num = num / 2;
        else
            num = num / 2;
    }
    //!小数
    int i=0;
    float num_1;
    printf("\nPlease input the decimal:");
    scanf("%f",&num_1);
    while(i<40)   //!1问题，不能停止输出例如0.25
    {
        num_1 = num_1 * 2;
        if(num_1==0.0)
            {
                printf("0");
            }
        else
        {
            if (num_1>=1)   //! 增加了=1解决了问题
            {
                printf("1");
                num_1 = num_1 - 1;
            }
            else
            {
                printf("0");
            }
        }
        i++;
    }
    system("pause");
    return 0;
}
