#include <stdio.h>
int main()
{
    char string[100];
    int i = 0;
    gets(string);
    while(string[i]!='\0')
    {
        if(string[i]>=97&&string[i]<=122)
            string[i] = string[i] - 32;
        i++;
    }
    puts(string);
    return 0;
}
