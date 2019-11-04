#include <stdio.h>
int main()
{
    int a=5;
    a = a % -3;
    a=-5;
    a = a % 3;//取余与第一个数符号相同
    printf("%d",a);
    return 0;
    system("pause");
}
