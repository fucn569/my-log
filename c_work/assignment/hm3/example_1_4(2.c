#include <stdio.h>
int main()
{
    int amount = 1;
    float one, two, five;
    for (one=0;one <= 10 * amount; one++)
    {
        for (two = 0;two <= 5 * amount;two++)
        {
            for (five = 0;five <= 2 * amount;five++)
            {
                if(one * 0.1 + two * 0.2 + five * 0.5==amount)
                    printf("5cent %.0f 2cent %.0f 1cent %.0f\n", five, two, one);
                else
                    ;
            }
        }
    }
    system("pause");
    return 0;
}
