#include <stdio.h>
#define Min(x,y) x>y?x:y
int main()
{
    int a = 1, b = 2, c = 3, d = 4, t;
    t = Min(a + b, c + d) * 1000;
    printf("%d",t);
    system("pause");
    return 0;
}
