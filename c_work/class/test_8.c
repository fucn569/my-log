#include <stdio.h>
#include <strings.h>
int main()
{
    char password[7] = "123456";  //? 字符数组不够大也可以
    char number[5]="7890";
    printf("%s\n",password);
    strcat(password, number);
    printf("%s", password);
    return 0;
}
