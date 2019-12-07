#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int num=0,m,i;             //* m为返回值存储变量
    int pos[10];
    int match(char *str1, char *str2, int *num, int *pos);
    printf("Please input the first string:\n");
    gets(str1);
    printf("Please input the second string:\n");
    gets(str2);
    m = match(str1,str2,&num,pos);
    if(m==0)    //* m=0即有出现相同
    {
        printf("The string has appeared %d times,the position:", num);
        for (i = 0; i < num&&i<10;i++)
        {
            printf("%d", pos[i]);
            if(i<num-1)
                printf(",");
            else
                printf(".\n");
        }
    }
    else
    {
        printf("The string has appeared 0 times.\n");
    }
    system("pause");
    return 0;
}
int match(char *str1, char *str2, int *num, int *pos)
{
    int i=0,j,r=0;
    int m=0;
    char b,c;//监测量
    while(*(str1+i)!='\0')
    {
        if(*(str1+i)!=' ')
        {
            for (j = 0; *(str2 + j) != '\0'
            && *(str1 + i)!=' '&&*(str1 + i)!='.'     //皮一下
            &&*(str1 + i)!=','&&*(str1 + i)!='?'
            &&*(str1 + i)!='!'&&*(str1 + i)!='"'
            &&*(str1 + i)!='\''&&*(str1 + i)!=':'
            ;j++,i++)
            {
                b = *(str1 + i);
                c = *(str2 + j);
                if(*(str2 + j)!=*(str1 + i))
                {
                    r = 1;
                    break;
                }
            }
            if(r==0&&*num<11)
            {
                pos[*num] = i - j+1;
                (*num)++;
            }
            while(*(str1 + i)!=' '&&*(str1 + i)!='.'   //皮一下
            &&*(str1 + i)!=','&&*(str1 + i)!='?'
            &&*(str1 + i)!='!'&&*(str1 + i)!='"'
            &&*(str1 + i)!='\''&&*(str1 + i)!=':')
            {
                i++;
            }
        }
        r = 0;
        i++;
    }
    if(*num==0)
        m = 1;
    return m;
}
