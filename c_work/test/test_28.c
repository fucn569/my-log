#include <stdio.h>
int main()
{
    int a = 21;
    int b = a % 10;
    if((a%10)!=1)
        printf("1");
    else
        printf("0");
    printf("\n%d", (a % 10));
    printf("\n%d", a);
    printf("\n%d", b);
    system("pause");
    return 0;
}
