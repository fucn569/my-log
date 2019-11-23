/*有15个数存放在一个数组中，输入一个数，要求用折半查找法找出该数是数组中第几个元素的值。
如果该数不在数组中，则打印出“无此数”。  读懂下面的程序，并填空。
变量说明：top, bott：查找区间两端点的下标；loca:查找成功与否的开关变量。
*/
//Vscode
#include <stdio.h>
#define N 5
int main()
{
    int i, number,top,bott,min,loca,a[N];
    printf("Input %d numbers(a[i]>a[i-1])\n",N);  /* 由大到小 */
    scanf("%d", &a[0]);    /* 输入第1个数据 */
    i=1;
    while (i<N)
    {
        scanf("%d",&a[i]);  /* 输入下一个数据 */
        if (a[i]>=a[i-1])   /* 是否大于前一个数 */
            i++;
        else
        {
            printf("Repeat input number a[i]");
            printf("must >= %d\n", a[i-1]);
        }
    }
    printf("Input the finded number:");  /* 输入需要查找的数 */
    scanf("%d", &number);
    loca=0;
    top=0;
    bott=N-1;
    if ((number<a[0])||(number>a[N-1]))
	    loca=-1;                   /* 不在范围内 */
    while ((loca==0) && (top<=bott))   //!loca在此处的作用值得研究
    {
        min=(top+bott)/2;
        if (number==a[min])
        {
            loca=min;
            printf("The serial number is  %d.\n",loca+1);
        }
        else if (number<a[min])
            bott=min-1;
        else
            top=min+1;
    }
    if (loca==0 || loca==-1)
        printf("%d isn't in tabel\n", number);
    system("pause");
    return 0;
}


