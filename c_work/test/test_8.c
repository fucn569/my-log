#include <stdio.h>
int main()
{
    printf("**%04d**\n",8);       //前面加4是宽度，加0是补0
    printf("**%-8.2f**\n",4.5);   //符号左对齐
    printf("**%+8.2f**\n",4.5);
    printf("**%+2.2f**\n",4.5);   //宽度不够不影响，多了留空格
    printf("**%#8.2f**\n",4.5);   //#不知道什么意思
    printf("**%8.2f**\n",4.5);
    printf("**%%%8.2f**\n",4.5);  //双百分号出一个百分号
    system("pause");
    return 0;
}
