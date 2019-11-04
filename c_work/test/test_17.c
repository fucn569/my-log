//*switch结构  处理数轴中几个点的情况
//*常量只能是字符型或整型
//*case后常量不能两两相同，允许多条语句
//*若不添加break,注意输入顺序
//*case与default位置可以乱序
//*default可以省略


#include <stdio.h>
int main()
{
    int month = -1;
    char leap_year[4]={0};
    printf("Please input a month,");
    printf("let me tell you how many days in it.\n");
    printf("(Type '0' to stop the program):");
    do
    {
        if(month==-1 || month== 0)
            ;
        else
            printf("\nTry other answer please:");
        scanf("%d",&month);

    switch(month)
    {
        case 1:     //case与数字有间隔       //!可以跟浮点类型吗？
            printf("January has 31 days!");
            break;
        case 2:
            printf("Is it a leap year?");
            scanf("%s", leap_year);
            if(0==strcmp(leap_year,"yes"))
                printf("February has 29 days.");
            else if(0==strcmp(leap_year,"no"))
                printf("February has 28 days.");   //todo 输入判断是否是闰年(strcmp成功但原理不清楚)
            else
                ;
            break;
        case 3:
            printf("March has ... oh 31 days");
            break;
        case 4:
            printf("April...see the calender please.");
            break;
            /*case 5:
            case6:printf("");    //!表示为5或6时执行
            */
        default:     //注意拼写
            printf("Sorry,I don't konw.");
            break;
        case 0:      //? '#'时此分支语句没有起作用  参照c plus给出解答
                     //! %c和%d或者说char和int类型不同，可以将原本的'#'改为 0进行结束判断
            printf("The end.");
            break;
    }
    } while (month != 0);
    system("pause");
    return 0;
}
