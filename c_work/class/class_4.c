#include <stdio.h>
#include <strings.h>
int main()
{
    int num=0, word=0,i;
    char sentence[100];
    char c;
    printf("Please input the sentence:");
    gets(sentence);
    for (i; (c = sentence[i])!='\0';i++)
    {
        if(c==' ')
            word = 0;
        else if(word==0)  //? word作用 防止多空格对单词数量的影响
        {
            word = 1;
            num++;
        }
    }
    printf("There are %d words in this sentence.\n", num);
    return 0;
}
