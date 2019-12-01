/*猪猪Hanke特别喜欢吃烤鸡（本是同畜牲，相煎何太急！）Hanke吃鸡很特别，为什么特别呢？
因为他有10种配料（芥末、孜然等），每种配料可以放1—3克，
任意烤鸡的美味程度为所有配料质量之和

现在，Hanke想要知道，如果给你一个美味程度，请输出这10种配料的所有搭配方案*/
#include <stdio.h>
int main()
{
    int del;
    scanf("%d", &del);
    int sum(int a[10]);
    void pri(int a[10]);
    int a[10];
    int i, j,m,n=0,k;
    for (i = 0; i < 10;i++)
    {
        a[i] = 1;
    }
    for (i=9; i > -1;i--)
    {
        for (; a[i] < 4;a[i]++)
        {
            m = sum(a);
            if(m==del)
            {
                break;
            }
        }
        if(m==del)
        {
            for (i=9; i > -1;i--)
            {
                if(a[i]==1)
                {
                    printf("1\n");
                    pri(a);
                    exit(0);
                }
                for (j = 8;j > -1;j--)
                {
                    if(a[j]==1)
                    {
                        break;
                    }
                }
                
            }
        }
    }
    return 0;
}
int sum(int a[10])
{
    int sum=0,i;
    for (i = 0; i < 10;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
void pri(int a[10])
{
    int i;
    for (i = 0;i<10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
