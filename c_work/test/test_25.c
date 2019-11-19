//起泡法
#include <stdio.h>
int main()
{
    int i,j,t,area[6]={8,2,4,5,1,3};
    for (j = 0; j < 5;j++)              //? j的作用：节省计算
    {
        for (i = 0; i < 5-j ;i++)
            {
                if (area[i] > area[i + 1])
                {
                    t = area[i + 1];
                    area[i + 1] = area[i];
                    area[i] = t;
                }
                else
                    ;
            }
            printf("j=%4d\ni=%4d\na[i+1]=%4d\n", j, i, area[i+1]);  //todo 分析下结果
    }
    for (i = 0; i < 6;i++)
    {
        printf("%4d\n", area[i]);
    }
        return 0;
}
