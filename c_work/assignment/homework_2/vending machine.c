#include <stdio.h>
int main()
{
    int num;
    printf("\t\t\t\tHello!\n\t\t\tWelcome to vending machine.\n");
    printf("\t\t\tHere is the list:\n");
    printf("\t\t\t1.chocolate\n\t\t\t2.cake\n\t\t\t3.coca-cola\n");
    printf("\n\tNow please input the number to tell me what you want:");
    scanf("%d", &num);
    if(num==1)
        printf("\tYou have selected chocolate!\n");
    if(num==2)
        printf("\tYou have selected cake!\n");
    if(num==3)
        printf("\tYou have selected coca-cola!\n");
    system("pause");
    return 0;
}
