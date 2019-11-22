//Vscode
#include <stdio.h>
int number,deno,Com;
int main()
{
    int ComDiv(int num1, int num2);
    int ComMul(int num1, int num2);
    int RdcFrc(int number, int deno);
    void Add(int number1, int deno1, int number2, int deno2);  // +
    void Sub(int number1, int deno1, int number2, int deno2);  // -
    void Mul(int number1, int deno1, int number2, int deno2);  // *
    void Div(int number1, int deno1, int number2, int deno2);  // /

    int num1, num2, deno1, deno2;
    char operator1, operator2,operator;

    printf("Please input the number1=?,number2=?,operator=?,deno1=?,deno2=?\n");
    scanf("%d%c%d%c%d%c%d", &num1, &operator1, &deno1, &operator, &num2, &operator2, &deno2);
    switch(operator)
    {
        case '+':
            Add(num1,deno1,num2,deno2);
            break;
        case '-':
            Sub(num1,deno1,num2,deno2);
            break;
        case '*':
            Mul(num1,deno1,num2,deno2);
            break;
        case '/':
            Div(num1,deno1,num2,deno2);
            break;
        default:
            printf("error!");
    }
    if(operator=='+'||operator=='-'||operator=='*'||operator=='/')
        printf("The result is %d/%d",number,deno);
    system("pause");
    return 0;
}
int ComDiv(int num1, int num2)   //公因数
{
    int r=1,i;
    while(r!=0)
        {
                if (num1 < num2)
                {
                    i = num1;
                    num1 = num2;
                    num2 = i;
                }
                r = num1 % num2;
                num1 = r;
        }
        return num2;
}
int ComMul(int num1, int num2)   //公倍数
{
    int ComDiv(int num1, int num2);
    int Com;
    Com = ComDiv(num1, num2);
    printf("%d\n", num1 * num2 / Com);
    return num1 * num2 / Com;
}
void Add(int number1, int deno1, int number2, int deno2)
{
    int ComMul(int num1, int num2);
    int ComDiv(int num1, int num2);
    deno = ComMul(deno1, deno2);
    number = deno / deno1 * number1 + deno / deno2 * number2; //
    Com = ComDiv(number, deno);
    number = number / Com;
    deno = deno / Com;
}
void Sub(int number1, int deno1, int number2, int deno2)
{
    int ComMul(int num1, int num2);
    int ComDiv(int num1, int num2);
    deno = ComMul(deno1, deno2);
    number = deno / deno1 * number1 - deno / deno2 * number2;
    Com = ComDiv(number, deno);
    number = number / Com;
    deno = deno / Com;
}
void Mul(int number1, int deno1, int number2, int deno2)
{
    int ComDiv(int num1, int num2);
    deno = deno1 * deno2;
    number = number1 * number2;
    Com = ComDiv(number, deno);
    number = number / Com;
    deno = deno / Com;
}
void Div(int number1, int deno1, int number2, int deno2)
{
    int ComDiv(int num1, int num2);
    deno = deno1 * number2;
    number = number1 * deno2;
    Com = ComDiv(number, deno);
    number = number / Com;
    deno = deno / Com;
}
