#include <stdio.h>
int main()
{
    int num = 10;
    int result = --num < 20 && num++ > 11;  //num++整个运算完毕后添加一个num=num+1
    printf("num=%d\n",num);
    printf("result=%d\n",result);
    num = 10;
    int result_2 = num++ > 11 && --num < 20;  //num++>11为假后，--num就不计算了  短路运算
    printf("num=%d\n",num);
    printf("result=%d\n",result_2);
    system("pause");
    return 0;
}
