#include <stdio.h>
int main()
{
    char ch1, ch2;
    char ch;
    printf("input for ch1:\n");
    scanf("%c",&ch1);
    printf("ch1=%c\n",ch1);


    //rewind(stdin);                    //下述问题清空缓存区可解决 2   原因：scanf不能直接读键盘输入的数，会存到键盘缓冲区
    //fflush(stdin);在c/c++中未被定义过，不同编译器结果不同
    //setbuf(stdin,NULL);

    //上述函数可能会因为环境的变化而改变，用下列语句可以通用
    while((ch=getchar())!=EOF && ch!='\n')     //EOF:end of file
    {

    }

    printf("input for ch2:\n");       //问题：第二个输入不起作用 1
    scanf("%c",&ch2);
    printf("ch2=%c\n",ch2);
    system("pause");
    return 0;
}
