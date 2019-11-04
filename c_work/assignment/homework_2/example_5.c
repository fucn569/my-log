#include <stdio.h>
int main()
{
    int a=1001, r;
    while(a>1000)
    {
        printf("Please input an integer under 1000:");
        scanf("%d",&a);
    }

    if(a<1000)
    {
        r = sqrt(a);
        printf("r=%d", r);
    }

    system("pause");
    return 0;
}
