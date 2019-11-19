#include <stdio.h>
#include <strings.h>
int main()
{
    char str1[100]; //int i;char str[2][100]; for(i=0;i<1;i++)gets(str[i])
    char str2[100];
    gets(str1);
    gets(str2);
    if(strcmp(str1,str2)>0)
    {
        strcat(str1, str2);
    }
    else
    {
        strcpy(str1, str2);
    }
    printf("%s",str1);
    system("pause");
    return 0;
}
