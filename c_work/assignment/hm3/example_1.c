#include <stdio.h>
int main()
{
    float one_cent=0, two_cent=0, five_cent=0,sum;
    float amount=1;
    while(0.5*five_cent<=amount)
    {
        five_cent++;
    }
    five_cent -= 1;
    while(five_cent!=0)
    {
        if(0.5*five_cent==amount)
            printf("5cent %.0f 2cent %.0f 1cent %.0f\n", five_cent, two_cent, one_cent);
        else
            {
                while(0.5*five_cent+0.2*two_cent<amount)
                {
                    two_cent++;
                }
                two_cent -= 1;
                if(0.5*five_cent+two_cent*0.2==amount)
                printf("5cent %.0f 2cent %.0f 1cent %.0f\n", five_cent, two_cent, one_cent);
                else
                {
                    while(0.5*five_cent+0.2*two_cent+0.1*one_cent<amount)
                    {
                        one_cent++;
                    }
                    if(0.5*five_cent+0.2*two_cent+0.1*one_cent==amount)
                    printf("5cent %.0f 2cent %.0f 1cent %.0f\n", five_cent, two_cent, one_cent);
                }
            }
    five_cent--;
    }
    one_cent = 0;
    two_cent = 0;
    while(0.2*two_cent<=amount)
    {
        two_cent++;
    }
    two_cent -= 1;
    while(two_cent!=0)
    {
        if(0.2*two_cent==amount)
            printf("5cent 0 2cent %.0f 1cent %.0f\n",two_cent, one_cent);
        else
            {
            while(0.2*two_cent+0.1*one_cent<amount)
                {
                    one_cent++;
                }
            if(0.2*two_cent+0.1*one_cent==amount)
                printf("5cent 0 2cent %.0f 1cent %.0f\n", two_cent, one_cent);
            }
    two_cent--;
    }
    while(0.1*one_cent<amount)
    {
        one_cent++;
    }
    printf("5cent 0 2cent 0 1cent %.0f\n",one_cent);
    system("pause");
    return 0;
}
