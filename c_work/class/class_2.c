#include <stdio.h>
#include <strings.h>
int main()
{
    //char password[10] = {'1', '2', '3', '4', '5', '6'};
    char password[10]="123456";
    char c[6];
    char a[10];
    gets(c);
    int i;
    for (i = 0; i < 10;i++)
        printf("%c",password[i]);
    puts(c);//输出字符串时输出的是元素组名
    strcpy(a, password);   //!后者向前者复制
    printf("%s\n", strcat(password, c));
    puts(a);
    system("pause");
    return 0;
}

//strncpy 可以取前几个字符复制
