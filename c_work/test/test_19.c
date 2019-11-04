//while看作if的加强版
//三要素：变量的初值、变量的判断、变量的更新
//先判断，再执行

#include <stdio.h>
int main()
{
    //*char password[7] = {123456};
    char password_input[7]={0};
    int i=0;
    printf("Please input the password.(You have three opportunities):");

     //?输入123456不成功？？

    while(i<4)
    {
        i++;
        scanf("%s",&password_input);
        if(0 == strcmp(password_input,"123456"))  //todo strcmp()字典序
        {
            printf("You have succeed!\n");
            exit(0);   //?系统无错退出
        }
        else if(i==3)
        {
            printf("You have the last opportunity!");
        }
        else if(i==4)
            break;
        printf("The password is wrong, please input again:");

    }
        printf("Account blocked.");
    system("pause");
    return 0;
}
