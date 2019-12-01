#include <stdio.h>
int main()
{
    int i=1,t;
    getchar();
    for (i = 1; i++ < 10;)
        {
        t = i;
        if(i==10)
            printf("111\n")
        ;
        }


    /*if (i++ == 1) //相当于i==1;i++;
        printf("1");
    else
        printf("0");
    printf("\n%d", i);
    t = i++; // 相当于 t=i;i++;
    printf("\n%d", t);*/
    printf("\n%d", i);
    return 0;
}
