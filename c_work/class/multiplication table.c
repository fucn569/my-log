#include <stdio.h>
int main()
{
    int i=1, j;
    while(i<10)
    {
        j = 1;
        while(i>=j)
        {
            printf("%d*%d=%d\t", i, j, i*j);
            j++;
        }
        printf("\n");
        i++;
    }
    system("pause");
    return 0;
}
