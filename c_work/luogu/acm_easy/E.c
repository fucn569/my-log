#include <stdio.h>
int main()
{
    int n, i,j=1;
    scanf("%d", &n);
    for (; n >= 1;n--)
    {
        for (i=1; i <= n;i++,j++)
            {
                printf("%02d", j);
            }
        printf("\n");
    }
    system("pause");
    return 0;
}
