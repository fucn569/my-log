//使用vscode  使用"r+"模式，若打开文件不存在则跳出程序
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char string[100],word[100];  //数组
    char name[100];              //文件名
    int pos,len;                 //位置、长度
    printf("Please input the file's name:\n");//文件名
    gets(name);
    printf("Please input the word:\n");//单词
    gets(word);
    printf("Please input the position:\n");//位置
    scanf("%d", &pos);
    char *p;                         //指向字符串的指针
    p = string;
    if((fp=fopen(name,"r+"))==NULL)  //打开文件
    {
        printf("cann't open file!\n");
        exit(0);
    }
    void insert(int pos, char *p,char word[100],int len);    //插入
    void read(char *p,FILE *fp,char name[100]);              //读入
    void output(char *p,FILE *fp);                           //输出
    read(p, fp,name);
    len=strlen(string);
    insert(pos,p,word,len);
    rewind(fp);
    output(p, fp);
    printf("%s",p);    //输出
    fclose(fp);        //关闭
    system("pause");
    return 0;
}
void read(char *p,FILE *fp,char name[100])
{
    fgets(p,100,fp);
}
void insert(int pos, char *p,char word[100],int len)   //位置之前新建字符串，位置之后新建字符串
{                                                      //再用strcat函数进行拼接得到插入效果
    char string_1[100], string_2[100];
    int i,j;
    for (i = 0; i < pos;i++)
    {
        string_1[i] = *(p + i);
    }
    string_1[i] = '\0';             //末尾补'\0'
    for (j=0; i < len;i++,j++)
    {
        string_2[j] = *(p + i);
    }
    string_2[j] = '\0';
    strcat(string_1, word);
    strcat(string_1, string_2);
    strcpy(p, string_1);           //复制
}
void output(char *p,FILE *fp)
{
    fputs(p, fp);
}
