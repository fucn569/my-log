/*下面程序的功能是在一个字符数组中查找一个指定的字符，
若数组中含有该字符则输出该字符在数组中第一次出现的位置（下标值）；否则输出-1。*/
#include <string.h>
int main()
{
    char c='a',t[50];  /* 字符数组定义语句 */
    int n,k,j;

    printf("\nInput a string:");
    gets(t);
    n =strlen(t);   	/* 用函数得到该字符串的长度 */

    for(k=0;k<n;k++)
    {
	    if (t[k]==c)
        {
            j = k;
            break;
        }
	    else
            j = -1;
    }
    printf("\n Position is:%d",j); 	 /* 输出查询结果 */
    system("pause");
    return 0;
}
