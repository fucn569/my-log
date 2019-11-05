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
    system("pause");
    return 0;
}
