#include <stdio.h>
int main()
{
    int num=0;
    printf("\t\t\t\tHello!\n\t\t\tWelcome to vending machine.\n");
    printf("\t\t\tHere is the list:\n");
    printf("\t\t\t1.chocolate\n\t\t\t2.cake\n\t\t\t3.coca-cola\n");
    printf("\n\tNow please input the number to tell me what you want:");
    while((num!=1 && num!=2) || num==3)
    {
    scanf("%d", &num);
    switch(num)
    {
        case 1:
            printf("\tYou have selected chocolate!\n");
            break;
        case 2:
            printf("\tYou have selected cake!\n");
            break;
        case 3:
            printf("\tYou have selected coca-cola!\n");
            break;
        default:
            printf("\tError!\n\tPlease input again:");
            while((num=getchar())!=EOF && num!='\n')     //EOF:end of file
    {

    }
    }
    }
    system("pause");
    return 0;
}
