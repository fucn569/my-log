//!牛B！！！!!
#include <stdio.h>
#include <math.h>
int main()
{
    int num_c,num_s,i=0,mid=0,r;
    printf("Please input a number:");
    scanf("%d",&num_s);
    while(mid<num_s)      //*找到比输入数大的2的i次方
    {
        mid = pow(2, i);
        i++;
    }
    num_c = num_s;
    while(1)    //*在2的x方前加0（x=0,1,2...
    //? while(1)为恒真循环
    {
        if(num_c==1)
        {
            printf("0");
            break;
        }
        else
        {
            r = num_c % 2;
            num_c = num_c / 2;
            if(r==0)
                continue;
            else
                break;
        }
    }
    while(i!=0)      //*加权取二进制
    {
        i = i - 1;
        mid = pow(2,i);
        if(num_s>=mid)
        {
            num_s = num_s - mid;
            printf("1");
        }
        else
            printf("0");
    }
    //!小数
    i=0;
    float num_1;
    printf("\nPlease input the decimal:");
    scanf("%f",&num_1);
    while(i<20)   //!1问题，不能停止输出例如0.25
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

