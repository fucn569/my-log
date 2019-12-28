#include <stdio.h>
#include <math.h>
//ZL先生被主管告之，在计算器上键入的一个一元一次方程中，
//只包含整数、小写字母及+、-、=这三个数学符号（当然，符号“-”既可作减号，也可作负号）。
//方程中并没有括号，也没有除号，方程中的字母表示未知数。
int main()
{
    char equation[100000];
    char unknown='\0';
    float res;

    gets(equation);
    float caculate(char *unk, char *equ);
    res = caculate(&unknown, equation);
    printf("%c=%.3f", unknown, res);
    system("pause");
    return 0;
}

int check(char *p,int i,int loc)
{
    int j, jud=0;
    j = i;
    for (; j<=loc; j++) {           //* 遍历一遍，看是否有字母
        if(*(p+j)>57)
            jud = 1;                    //* 状态量   1为有字母
    }
    return jud;
}

float re_k(char *p,int i,int loc,int jud)
{
    int j;
    float k = 0;
    for (j=i; j<=loc; j++) {
        if(*(p+i)=='-')
        {
            if(j==i)
                j++;
            if(jud==1)
            {
                if(*(p+j)>'=')
                {
                    k = -1;
                    break;
                }
            k = k-(*(p + j)-'0') * pow(10,loc - j-1);
            if(j==loc-1)
                j++;
            }
            else
            {
                k = k-(*(p + j)-'0') * pow(10,loc - j);
            }
        }
        else
        {
            if(jud==1)
            {
                if(*(p+i)>'=')
                {
                    k = 1;
                    break;
                }
            k = k+(*(p + j)-'0') * pow(10,loc - i-1);
            i++;
            if(*(p + j+1)>'9')
                j++;
            }
            else
            {
                k = k+(*(p + j)-'0') * pow(10,loc - i);
                i++;
            }
        }
    }
    return k;
}

void common(char *p,int i,int loc,int loc_eq,float *uk,float *k)  //* i起始位置，loc末位置              //* 刚刚开始或者'='后面
{
    int jud;
    jud = check(p, i, loc);
        if(jud==0)
        {
            if(loc<loc_eq)
            {
                if(*(p+i-1)=='-')
                    *k =*k +re_k(p, i, loc,jud);
                else
                    *k =*k -re_k(p, i, loc,jud);
            }
            else
            {
                if(*(p+i-1)=='-')
                    *k =*k -re_k(p, i, loc,jud);
                else
                    *k =*k +re_k(p, i, loc,jud);
            }
        }
        else
        {
            if(loc<loc_eq)
            {
                if(*(p+i-1)=='-')
                    *uk = *uk - re_k(p, i, loc,jud);
                else
                    *uk = *uk + re_k(p, i, loc,jud);
            }
            else
            {
                if(*(p+i-1)=='-')
                    *uk = *uk + re_k(p, i, loc,jud);
                else
                    *uk = *uk - re_k(p, i, loc,jud);
            }
        }
}
float caculate(char *unk, char *equ)
{
    char *p;
    int i,st;
    float a = 0,b=0;
    float *uk=&a, *k=&b;   //* uk为未知量系数，k为常数
    int loc_eq,loc_end;

    p = equ;
    for (i=0; *(p+i)!='\0'; i++) {       //* 找出 未知数 和 '='位置
        if(*(p+i)=='=')
            loc_eq = i;
        if(*(p+i)>'=')
            *unk = *(p + i);
    }
    loc_end = i;
    for (i=0; i<=loc_end;i += 2) {
        if(i==0||i==loc_eq+1)
        {
            st = i;
            if(*(p+i)=='-')
                i++;
            for (; (*(p + i) >= '0' && *(p + i) != '='); i++)
                ;
            i--;
            common(p, st, i, loc_eq, uk, k);
        }
        else
        {
            st = i;
        for (; *(p+i)>='0'&&*(p+i)!='='; i++)
            ;
        i--;
        common(p, st, i, loc_eq, uk, k);
        }
    }
    if(*k==0&&*uk<0)
        return -0;
    else
        return (*k) / (*uk);
}

