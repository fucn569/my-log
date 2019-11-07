#include <stdio.h>
int main()
{
    float one_cent, two_cent, five_cent=0;
    int amount=1,i=1;
    while(0.5*five_cent<amount)
    {
        five_cent++;
    }
    printf("5cent %.0f 2cent %.0f 1cent %.0f\n", five_cent, two_cent, one_cent);
    while(five_cent!=1)
    {
        five_cent--;
        one_cent = 0;
        two_cent = 0;
        two_cent += 2 * i;
        one_cent+=1*i;
        printf("5cent %.0f 2cent %.0f 1cent %.0f\n", five_cent, two_cent, one_cent);
        two_cent = one_cent = 0;
        two_cent += 1*i;
        one_cent += 3*i;
        printf("5cent %.0f 2cent %.0f 1cent %.0f\n", five_cent, two_cent, one_cent);
        two_cent = one_cent = 0;
        one_cent += 5*i;
        printf("5cent %.0f 2cent %.0f 1cent %.0f\n", five_cent, two_cent, one_cent);
        i++;
    }
    one_cent = 0;
    while(0.2*two_cent<amount)
    {
        two_cent++;
    }
    printf("5cent 0 2cent %.0f 1cent %.0f\n",two_cent, one_cent);
    while(two_cent!=0)
    {
        two_cent--;
        one_cent+=2;
        printf("5cent 0 2cent %.0f 1cent %.0f\n",two_cent, one_cent);
    }
    system("pause");
    return 0;
}
