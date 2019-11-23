#include <stdio.h>
#define N  5
/*3. 将一个数组中的值按逆序重新存放，例如，原来顺序为：8，6，5，4，1。
要求改为：1，4，5，6，8。提示：a[0]和a[n-1]交换， a[1]和a[n-1-1]交换….*/
int main()
{
    int a[N]={8,6,5,4,1}, i, temp;
    printf("\nThe original array is:");
    for (i=0; i<N; i++)
    printf("%4d", a[i]);
    for (i=0; i<N/2; i++)
    {
    temp=a[i];
    a[i]=a[N-i-1];
    a[N-i-1]=temp;
    }
    printf("\nThe new array is:");
    for (i=0; i<N; i++)
        printf("%4d",a[i]);
    system("pause");
    return 0;
}
