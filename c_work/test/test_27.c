#include <stdio.h>
int main()
{
    int i, j;  //循环数
    int r, c;  //行和列
    int max;
    int a[3][4] = {{1, 2, 3, 4}, {7, 8, 9, 5}, {-1, 3, 10, 6}};
    max = a[0][0];
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 4;j++)
        {
            if(a[i][j]>max)
            {
                max = a[i][j];
                r = i, c = j;
            }
            else
                ;
        }
    }
    printf("max=%d\nr=%d\nc=%d\n", max, r, c);
    return 0;
}
