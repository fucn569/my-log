#include <stdio.h>
#include <strings.h>
int main()
{
    char str1[10]="b", str2[10]="a";
    if(strcmp(str1,str2)>0)
        printf("R");
    return 0;
}

//* stract 连接字符串   stract(1,2)  将2放入1中
//* strcpy和strncpy 复制函数
//* strcmp 字符串比较函数
//* strcmp 比较ASC码 比较的值由函数值带回，相同是0，大小分别是正负
//* strlen 测量长度函数
//* strlwr 小写   strupr 大写

