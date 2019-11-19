#include <stdio.h>
#include <strings.h>
int main()
{
    char str[3][10];
    char string[10];
    int i;
    for (i = 0; i < 3;i++)
        gets(str[i]);
    strcpy(string, str[0]);   //! 初始化是重点！
    for(i=0;i<3;i++)
    {
        if(strcmp(string,str[i+1])<0)
        {
            strcpy(string, str[i+1]);
        }
    }
    printf("\nThe largest is:%s\n", string);
    return 0;
}
