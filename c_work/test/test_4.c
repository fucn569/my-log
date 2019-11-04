#include <stdio.h>
//getchar and putchar 清空缓冲区
int main()
{
    char ch1,ch2;
    //定义整型asc码也适用 5
    printf("Please input your character:");
    ch1 = getchar();
    fflush(stdin);   //清空缓冲区 3 （可删除观察不同结果）
    printf("Please input your character:");//出现问题   解决方法：清空缓冲区 2
    ch2 = getchar();
    //scanf("%c",&ch);等价写法 0

    printf("Your character is:%c,%c\n",ch1,ch2);//输入有讲究 1
    putchar(ch1);      //一次只能打印一个字符 4
    putchar(',d');     //见上行，具体结果可运行
    putchar(ch2);
    system("pause");
    return 0;

    /*putchar(getchar());
    putchar('\n');
    return 0;
    结果差不多*/
}
