#include <stdio.h>
int main()
{
    char s[3] = "123";
    char *p = s;
    printf("%c %c %c\n", *++p,*p++,*p++);
    return 0;
}
