#include <stdio.h>
int main()
{
    float a, b,result;
    char character;
    printf("Please input the caculate:");
    scanf("%f%c%f",&a,&character,&b);       //?  vs中需要"&character,1"怎么用
    switch(character)
    {
        case '+':
            result = a + b;
            printf("%f+%f=%f",a,b,result); //!printf 不要用地址符&&&&
            break;
        case '-':
            result = a - b;
            printf("%f-%f=%f",a,b,result);
            break;
        case '*':
            result = a * b;
            printf("%f*%f=%f",a,b,result);
            break;
        case '/':
            if (b!=0)
            {
                result = a / b;
                printf("%f/%f=%f",a,b,result);
            }
            else
                printf("error!");
            break;
        default:
            printf("error!");
    }
    /*if(character=='+')
        {
            result = a + b;
            printf("%3.2f+%3.2f=%3.2f",a,b,result);
        }
    else if(character=='-')
        {
            result = a - b;
            printf("%3.2f-%3.2f=%3.2f",a,b,result);
        }
    else if(character=='*')
        {
            result = a * b;
            printf("%3.2f+%3.2f=%3.2f",a,b,result);
        }
    else if(character=='/')
        {
            result = a / b;
            if (b==0)
                printf("error!");
            else
                printf("%3.2f/%3.2f=%3.2f",a,b,result);
        }
    else
        printf("error!");
    */
    system("pause");
    return 0;
}
