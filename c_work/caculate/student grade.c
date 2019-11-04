//todo 待修改

#include <stdio.h>
int main()
{
    int i,N=5,a;
    char b;

    for(i=1;i<N;i++)
{
    printf("Please input student's grade:");
    scanf("%d",&a);
    while((b=getchar())!=EOF && b!='\n')     //EOF:end of file
    {

    }
    printf("Please input student's ID:");
    scanf("%c",&b);
    if (a>=80)
{
    printf("%d\t%c\n",a,b);
}
    else
        continue;
}

    return 0;
}
