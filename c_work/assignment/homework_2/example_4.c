#include <stdio.h>
int main()
{
    int a, b,c;
    scanf("a=%d,b=%d",&a,&b);
    if(a>b)
    {
        printf("%d,%d\n",a,b);
    }
    else
    {
        c = a;
        a = b;
        b = c;
        printf("%d,%d\n",a,b);
    }
    system("pause");
    return 0;
}
