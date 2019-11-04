//if在区间分类有比较好的表现

#include <stdio.h>
int main()
{
    float price_flower;
    printf("A boy bought a bunch of flowers for a girl.");
    printf("The girl asked the price of the flowers.\n");

    do
    {
        printf("The boy responded:(input the price)");
        scanf("%f",&price_flower);
        if(price_flower>9999)
    {
        printf("The girl said:Let's get married!\n");
    }
    else if(price_flower>5000 && price_flower<=9999)
    {
        printf("The girl swooned.\n");
    }
    else if(price_flower>1000 && price_flower<=5000)
    {
        printf("The girl said:Let's date tomorrow.\n");
    }
    else if(price_flower>100 && price_flower<=1000)
    {
        printf("The girl said:You are a good boy.\n");
    }
    else if(price_flower==0)
    {
        printf("Oh!Stupid boy.\n");
    }
    else
    {
        printf("Oh!Shame on you!\n");
    }
    } while (price_flower <= 9999);
    system("pause");
    return 0;
}
