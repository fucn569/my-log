#include <stdio.h>
int main()
{
    char c;
    int i;
    while((c = getchar()) != '\n')
        printf("%c",c);
    system("pause");
    return 0;
}
