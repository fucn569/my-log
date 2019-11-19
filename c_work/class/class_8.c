//*局部变量：定义只在大括号范围内有效
//*全局变量：外部变量在括号之外  建议不在必要时不用全局变量
//*局部变量与全局变量冲突时优先使用局部变量
#include <stdio.h>
/*int a = 3, b = 5;
int main()
{
    int a = 1, b = 2;
    printf("%d %d", a, b);
    return 0;
}*/

//*自动变量 auto 一般可以不加，系统默认为
//*静态变量 static
int main()
{
    int f(int a);
    int a=2,i;
    for(i=0;i<3;i++)
        printf("%d\n", f(a));
    return 0;
}
int f(int a)
{
    int b=0;
    static c=3;
    b=b+1;
    c=c+1;
    return(a+b+c);
}
