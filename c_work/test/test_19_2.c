#include <stdio.h>
int main()
{
    int i;
    char password_input[7] ;
    char password[7] = "654321";
    printf("Please input the password.(You have three opportunities):");
    scanf("%s",password_input);
    while(i<4)
    {
        i++;
        scanf("%s",&password_input);
        if(0 == strcmp(password_input,"123456"))  //todo strcmp()字典序
        {
            printf("You have succeed!\n");
            exit(0);
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
    */
    system("pause");
    return 0;
}
