#include <stdio.h>
#include <stdlib.h>

int main()
{
    //定义字符串的几种方式
    //字符串和字符数组的区别：最后一位是否是空字符
    char names1[] = {'j', 'a', 'c', 'k', '\0'};
    char names2[50] = "jack";
    char * names3 = "jack";

    printf("Occupied speace:%d\n", sizeof(names1));
    printf("Occupied speace:%d\n", sizeof(names2));

    //动态输入
    printf("input the new name:");
    scanf("%s", names2);
    printf("%s\n", names2);

    return 0;
}
/*
注意：
声明存储字符串的数组时，数组大小至少比所存储的字符串多1，因为编译器会自动在
字符串常量的末尾添加空字符\0
*/
