#include <stdio.h>
int main()
{
    char i='1';
    void judge(char x);     //! 定义放在调用之前可以不定义，但放在之后则需要定义
    judge(i);
    system("pause");
    return 0;
}
void judge(char x)   //? 嵌套用法
{
    int Upper(char x);
    int Lower(char x);
    int Num(char x);
    if (Upper(x)==1)
        printf("The input thing is a big alphpet.");
    else if (Num(x)==1)
        printf("The input thing is a number.");
    else if (Lower(x)==1)
        printf("The input thing is a small alphpet.");
    else
        printf("The input thing is a special character.");
    printf("\n");
}
int Upper(char x)
{
    if(x >= 65 && x <= 90)
        return 1;
    return 0;
}
int Lower(char x)
{
    if(x >= 97 && x <= 122)
        return 1;
    return 0;
}
int Num(char x)
{
    if(x>=48 && x<=57)
        return 1;
    return 0;
}
