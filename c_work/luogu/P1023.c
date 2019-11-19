#include <stdio.h>
int main()
{
    int pre;
    int cost,vol;
    int pr1, pr2, vol1, vol2;
    int jud1=0, jud2=0;
    int rate3;
    int rate1,rate2;
    int pro1, pro2, pro3;
    int out1,out2;
    int max(int x, int y);
    int min(int x, int y);
    int pr1_0, pr2_0;
    int vol1_0, vol2_0;
    while(jud1!=-1&&jud2!=-1)
    {
        scanf("%d",&pre);
        scanf("%d %d",&cost,&vol);
        scanf("%d %d", &pr1_0, &vol1_0);
        scanf("%d %d", &pr2_0, &vol2_0);
        scanf("%d %d", &jud1, &jud2);
    }
    scanf("%d",&rate3);
    pr1 = max(pr1_0, pr2_0);
    vol1 = min(vol1_0, vol2_0);
    pr2 = min(pr1_0, pr2_0);
    vol2 = max(vol1_0, vol2_0);
    rate1 = (vol - vol2) / (pr2 - cost);  //small to small
    rate2 = (vol2 - vol1) / (pr1 - pr2);
    //
    if(pre<pr2)
    {
        for (out1 = 0,pro1=pro2=pro3=0; pro1 <= pro2 || pro1 <= pro3;out1++)//补贴
        {
            pro1 = (vol2+(pr2-pre)*rate1) * (pre - cost + out1);
            pro2 = ((vol2+(pr2-pre)*rate1)-rate1) * (pre - cost + out1+1);
            pro3 = ((vol2+(pr2-pre)*rate1)+rate1) * (pre - cost + out1-1);
            if(out1>pre)
            {
                out1=-1;
                break;
            }
        }
        for (out2 = 0,pro1=pro2=pro3=0; pro1 <= pro2 || pro1 <= pro3;out2++)//税
        {
            pro1 = (vol2+(pr2-pre)*rate1) * (pre - cost - out2);
            pro2 = ((vol2+(pr2-pre)*rate1)-rate1) * (pre - cost - out2+1);
            pro3 = ((vol2+(pr2-pre)*rate1)+rate1) * (pre - cost - out2-1);
            if(pre - cost - out2==0)
            {
                out2=-1;
                break;
            }
        }
        if(out1==-1&&out2==-1)
        {
            printf("NO SOLUTION");
        }
        else if(out1==out2)
        {
            printf("%d", out1-1);
        }
        else if(out1==-1&&out2!=-1)
        {
            printf("%d",-out2+1);
        }
        else if(out2==-1&&out1!=-1)
        {
            printf("%d",out1-1);
        }
    }
    else if(pre==pr2)
    {
        for (out1 = 0,pro1=pro2=pro3=0; pro1 <= pro2 || pro1 <= pro3;out1++)//补贴
        {
            pro1 = vol2 * (pre - cost + out1);
            pro2 = (vol2-rate2) * (pre - cost + out1+1);
            pro3 = (vol2+rate1) * (pre - cost + out1-1);
            if(out1>pre)
            {
                out1=-1;
                break;
            }
        }
        for (out2 = 0,pro1=pro2=pro3=0; pro1 <= pro2 || pro1 <= pro3;out2++)//税
        {
            pro1 = vol2 * (pre - cost - out2);
            pro2 = (vol2-rate2) * (pre - cost - out2+1);
            pro3 = (vol2+rate1) * (pre - cost - out2-1);
            if(pre - cost - out2==0)
            {
                out2=-1;
                break;
            }
        }
        if(out1==-1&&out2==-1)
        {
            printf("NO SOLUTION");
        }
        else if(out1==out2)
        {
            printf("%d", out1-1);
        }
        else if(out1==-1&&out2!=-1)
        {
            printf("%d",-out2+1);
        }
        else if(out2==-1&&out1!=-1)
        {
            printf("%d",out1-1);
        }
    }
    else if(pre<pr1&&pre>pr2)
    {
        for (out1 = 0,pro1=pro2=pro3=0; pro1 <= pro2 || pro1 <= pro3;out1++)//补贴
        {
            pro1 = (vol2-(pre-pr2)*rate2) * (pre - cost + out1);
            pro2 = ((vol2-(pre-pr2)*rate2)-rate2) * (pre - cost + out1+1);
            pro3 = ((vol2-(pre-pr2)*rate2)+rate2) * (pre - cost + out1-1);
            if(out1>pre)
            {
                out1=-1;
                break;
            }
        }
        for (out2 = 0,pro1=pro2=pro3=0; pro1 <= pro2 || pro1 <= pro3;out2++)//税
        {
            pro1 = (vol2-(pre-pr2)*rate2) * (pre - cost - out2);
            pro2 = ((vol2-(pre-pr2)*rate2)-rate2) * (pre - cost - out2+1);
            pro3 = ((vol2-(pre-pr2)*rate2)+rate2) * (pre - cost - out2-1);
            if(pre - cost - out2==0)
            {
                out2=-1;
                break;
            }
        }
        if(out1==-1&&out2==-1)
        {
            printf("NO SOLUTION");
        }
        else if(out1==out2)
        {
            printf("%d", out1-1);
        }
        else if(out1==-1&&out2!=-1)
        {
            printf("%d",-out2+1);
        }
        else if(out2==-1&&out1!=-1)
        {
            printf("%d",out1-1);
        }
    }
    else if(pre==pr1)
    {
        for (out1 = 0,pro1=pro2=pro3=0; pro1 <= pro2 || pro1 <= pro3;out1++)//补贴
        {
            pro1 = vol1 * (pre - cost + out1);
            pro2 = (vol1-rate3) * (pre - cost + out1+1);
            pro3 = (vol1+rate2) * (pre - cost + out1-1);
            if(out1>pre)
            {
                out1=-1;
                break;
            }
        }
        for (out2 = 0,pro1=pro2=pro3=0; pro1 <= pro2 || pro1 <= pro3;out2++)//税
        {
            pro1 = vol1 * (pre - cost - out2);
            pro2 = (vol1-rate3) * (pre - cost - out2+1);
            pro3 = (vol1+rate2) * (pre - cost - out2-1);
            if(pre - cost - out2==0)
            {
                out2=-1;
                break;
            }
        }
        if(out1==-1&&out2==-1)
        {
            printf("NO SOLUTION");
        }
        else if(out1==out2)
        {
            printf("%d", out1-1);
        }
        else if(out1==-1&&out2!=-1)
        {
            printf("%d",-out2+1);
        }
        else if(out2==-1&&out1!=-1)
        {
            printf("%d",out1-1);
        }
    }
    else if(pre>pr1)
    {
        for (out1 = 0,pro1=pro2=pro3=0; pro1 <= pro2 || pro1 <= pro3;out1++)//补贴
        {
            pro1 = (vol1-(pre-pr1)*rate3) * (pre - cost + out1);
            pro2 = ((vol1-(pre-pr1)*rate3)-rate3) * (pre - cost + out1+1);
            pro3 = ((vol1-(pre-pr1)*rate3)+rate3) * (pre - cost + out1-1);
            if(out1>pre)
            {
                out1=-1;
                break;
            }
        }
        for (out2 = 0,pro1=pro2=pro3=0; pro1 <= pro2 || pro1 <= pro3;out2++)//税
        {
            pro1 = (vol1-(pre-pr1)*rate3) * (pre - cost - out2);
            pro2 = ((vol1-(pre-pr1)*rate3)-rate3) * (pre - cost - out2+1);
            pro3 = ((vol1-(pre-pr1)*rate3)+rate3) * (pre - cost - out2-1);
            if(pre - cost - out2==0)
            {
                out2=-1;
                break;
            }
        }
        if(out1==-1&&out2==-1)
        {
            printf("NO SOLUTION");
        }
        else if(out1==out2)
        {
            printf("%d", out1-1);
        }
        else if(out1==-1&&out2!=-1)
        {
            printf("%d",-out2+1);
        }
        else if(out2==-1&&out1!=-1)
        {
            printf("%d",out1-1);
        }
    }
    return 0;
}
int max(int x, int y)
{
    int z;
    z = x > y ? x : y;
    return z;
}
int min(int x, int y)
{
    int z;
    z = x < y ? x : y;
    return z;
}

