#include <stdio.h>
int main()
{
    char letter=1;
    int num=0,gas;
    float price,fee;
    printf("\t\t\t\tHello!\n\t\t\tWelcome to gas station.\n");
    printf("\t\t\tHere is the list:\n");
    printf("\t\t\tA.a.gas first:5.75/L\n\t\t\tB.b.gas second:6.00/L\n\t\t\tC.c.gas third:7.15/L\n");
    printf("\n\tNow please input the letter to tell me what you want:");
    while(letter!='a'&&letter!='A'&&letter!='B'&&letter!='b'&&letter!='C'&&letter!='c')
    //!判断两次？？？
    {
    scanf("%c", &letter);
    switch(letter)
    {
        case 'A':
        case 'a':
            fee = 5.75;
            break;
        case 'B':
        case 'b':
            fee = 6.00;
            break;
        case 'C':
        case 'c':
            fee = 7.15;
            break;
        default:
            printf("\tError!\n\tPlease input again:");
            while((letter=getchar())!=EOF && letter!='\n')     //EOF:end of file
    {

    }
    }
    }
    printf("\tNow select the model you want.");
    printf("\n\t\t\t1.individually\n\t\t\t2.with assistant");
    printf("\n\tPlease input the number to tell me what model you want:");
    while(num!=1 && num!=2)
    {
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            fee = fee * 0.95;
            break;
        case 2:
            fee = fee * 0.9;
            break;
        default:
            printf("\tError!\n\tPlease input again:");
            while((num=getchar())!=EOF && num!='\n')     //EOF:end of file
    {

    }
    }
    }
    printf("\tPlease input how much gas do you want:");
    scanf("%d",&gas);
    price = fee * gas;
    printf("\tYou need to pay:%.2f yuan.\n",price);
    system("pause");
    return 0;
}
