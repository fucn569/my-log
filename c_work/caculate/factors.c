#include <stdio.h>
int main()
{
    int num;
    int i, r;
    int fac;
    printf("Please input the number:");
    scanf("%d", &num);
    printf("factors:\n");
    for (i = 2; i <= sqrt(num);i++)
    {
        r = num % i;
        if(r==0)
        {
            fac = num / i;
            printf("%d\t%d\n", i, fac);
        }
    }
    system("pause");
    return 0;
}
