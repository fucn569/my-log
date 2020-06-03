#include <stdio.h>
int main()
{
int temp,i,j;
i = 319;
j = 377;
if (i < j)
{
    temp = i;
    i = j;
    j = temp;
    }
    temp = i % j;
    while(temp!=0)
    {
        i = temp;
        if(i<j)
        {
            temp = i;
            i = j;
            j = temp;
        }
        temp = i % j;
    }
    printf("% d % d", i, j);
    return 0;
}
