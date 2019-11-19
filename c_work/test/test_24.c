//斐波那契
#include <stdio.h>
int main()
{
    int i, a[20] = {1, 1};
    for (i = 2; i < 20;i++)
    {
        a[i] = a[i - 2] + a[i - 1];
    }
    for (i = 0; i < 20;i++)      //!下标越界会输出乱数
    {
        if (i % 5 == 0 && i != 0)
            printf("\n");
        printf("%10d", a[i]);
    }
    printf("\n");
    return 0;
}
