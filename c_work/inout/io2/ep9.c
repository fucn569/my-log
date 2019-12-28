#include <stdio.h>
#include <stdlib.h>   //* exit(0)
#include <string.h>
int main()
{
    FILE *fp;
    char str[3][10], temp[10];
    int i, j, k, n = 3;
    printf("input:\n");
    for (i=0; i<n; i++) {
        gets(str[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j=i+1; j<n; j++) {
            if(strcmp(str[k],str[j])>0)
                k = j;
            if(k!=i)
            {
                strcpy(temp, str[k]);
                strcpy(str[k], str[i]);
                strcpy(str[i], temp);
            }
        }
    }
    if((fp=fopen("string.dat","w+"))==NULL)
    {
        printf("cnnot open!\n");
        exit(0);
    }
    printf("new string:\n");
    for (i=0; i<n; i++) {
        fputs(str[i], fp);
        fputs("\n", fp);
    }
    //*fflush(fp);
    //*fflush和rewind都可以清空缓存区，
    //*但略有差别造成了fflush清空会保留输入但无法输出，rewind不受影响
    rewind(fp);
    i = 0;                                 //? 错误？
    char str2[3][10];
    while(fgets(str2[i],10,fp)!=NULL)
    {
    printf("%s", str2[i]);
    i++;
    }
    fclose(fp);
    return 0;
}
