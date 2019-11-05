//矩阵
#include <stdio.h>
int main()
{
    int a, i;      //*a为行,i为列
    for (a = 1; a <= 4;a++)
    {
        for (i = 1; i <= 5; i++)
        {
            printf("%4d", a * i);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
