#include <stdio.h>
int main()
{
    int a=2, b=3, max;
    max = ((a+b) > b) ? (a+b) : b;      //! '?'和':'是条件运算符
    //*先计算表达式1的值，表达式1后问号表示"该往哪里走"
    //*若表达式1的值为真，直接到表达式2，如为假，绕过表达式2,到表达式3
    //todo 条件运算符：
//*三目运算符
//*表达式1？表达式2:表达式3
    /*
    if(a>b)
        max=a;
    else
        max=b;
    */
    printf("%d",max);
    system("pause");
    return 0;
}
