#include <stdio.h>
int main()
{
    int c1, c2;
    //char c1,c2;
    putchar(c1=getchar());
    printf("%d",c2=getchar());
    //printf("%c",c2=getchar());
    system("pause");
    return 0;
}
/*  1.两者皆可
    2.应该用printf函数且格式符用%d
    3.不可能在任何条件互相代替
        ASC码只有128位，当数值范围超过ASC码就不适用了
        且char与int所占字节不同


*/
