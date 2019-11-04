#include <stdio.h>
int main()
{
    char ch;
    printf("Please type in a letter; type # to end my act.\n");
    while((ch=getchar())!='#')
    {
        if('\n'==ch)          //使空格不影响输入结果
            continue;
        if(islower(ch))
            switch(ch)
        {
            case 'a':
                printf("argali, a wild sheep of Asia\n");
                break;
            case 'b':
                printf("babirusa, a wild pig of Malay\n");
                break;
            case 'c':
                printf("coati,racoonlike mammal\n");
                break;
            default:
                printf("That's a stumper!\n");
        }
        else
            printf("I recognize only lowercase letters.\n");
        while(getchar()!='\n')    //防止出现abcd的输出
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");
    system("pause");
    return 0;
}
