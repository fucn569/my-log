#include <stdio.h>
int main()
{
    char input_sth;      //?为什么有可以同时识别数字和字母？test_17?
    scanf("%c", &input_sth);
    if (input_sth>=48 && input_sth<=57)
        printf("The input thing is a number.");
    else if (input_sth>=65 && input_sth<=90)
        printf("The input thing is a big alphpet.");
    else if (input_sth>=97 && input_sth<=122)
        printf("The input thing is a small alphpet.");
    else
        printf("The input thing is a special character.");
    system("pause");
    return 0;
}
