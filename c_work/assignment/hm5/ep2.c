//Vscode
#include <stdio.h>
int main()
{
    int DigitSum(int n);
    printf("Please input the integer.\n");
    int num,res;
    scanf("%d",&num);
    res=DigitSum(num);
    printf("The result is:%d",res);
    system("pause");
    return 0;
}
int DigitSum(int n)
{
    int num=n;
    while(num>=10)
    {
        num = num-10;
    }
    if(n==0)
        ;
    else
        num = num+DigitSum(n/10);
    printf("%d\n", num);
    return num;
}
