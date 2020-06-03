#include <stdio.h>
int main()
{
    int judge[4] = {0, 0, 0, 0}; //*总情况    0000为全假，1111为全真
    int b1 = 0, d1 = 0;          //*0为假，1为真
    int b2 = 0, c2 = 0;
    int a3 = 0, b3 = 0;
    int d4 = 0;
    int i = 0, j = 0;
    for (j = 0; j < 16;j++)
    {
        if(judge[0]==1)
        {
            b1 = 0;
            d1 = 1;
        }
        else
        {
            b1 = 1;
            d1 = 0;
        }
        if(judge[1]==1)
        {
            b2 = 0;
            c2 = 1;
        }
        else
        {
            b2 = 1;
            c2 = 0;
        }
        if(judge[1]==1)
        {
            b2 = 0;
            c2 = 1;
        }
        else
        {
            b2 = 1;
            c2 = 0;
        }
        if(judge[2]==1)
        {
            a3 = 0;
            b3 = 1;
        }
        else
        {
            a3 = 1;
            b3 = 0;
        }
        if(judge[3]==1)
        {
            d4 = 0;
        }
        else
        {
            d4 = 1;
        }
        if(b1==b2&&b2==b3&&d1==d4)               //*不能矛盾
        {
            if(a3==d1)                           //*A和D不能同时为小偷
            {
                if(a3==1)
                    ;
                else
                {
                    /*for (i = 0; i < 4;i++)
                        printf("%d",judge[i]);
                    printf("\n");*/
                    break;
                }
            }
        }
        for (i = 3; i >=0;)    //*二进制计算
        {
            if(judge[i]==0)
            {
                judge[i] = judge[i] + 1;
                while(i<3)
                {
                    judge[i + 1] = 0;
                    i++;
                }
                break;
            }
            else
            {
                i--;
            }
        }
    }
    if(a3==1)
        printf("A is thief.");
    if(b1==1)
        printf("B is thief.");
    if(c2==1)
        printf("C is thief.");
    if(d1==1)
        printf("D is thief.");
    system("pause");
    return 0;
}
