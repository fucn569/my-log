#include <stdio.h>
int main()
{
    float a,i;
    for (a = 1; a < 10;a++,i=1)
    //? for(a=1,i=1;a<10;a++)   与上面不同的是i=i+2只会执行一次
    {
        printf("%5.0f",i);
        i = i + 2;
    }
    system("pause");
    return 0;
}
