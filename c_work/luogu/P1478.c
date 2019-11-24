/*又是一年秋季时，陶陶家的苹果树结了n个果子。陶陶又跑去摘苹果，这次她有一个a公分的椅子。当他手够不着时，他会站到椅子上再试试。

陶陶之前搬凳子，力气只剩下s了。当然，每次摘苹果时都要用一定的力气。陶陶想知道在s<0之前最多能摘到多少个苹果。

现在已知n个苹果到达地上的高度xi，椅子的高度a，陶陶手伸直的最大长度b，陶陶所剩的力气s，陶陶摘一个苹果需要的力气yi，求陶陶最多能摘到多少个苹果。
输入格式

第1行：两个数 苹果数n，力气s。

第2行：两个数 椅子的高度a，陶陶手伸直的最大长度b。

第3行~第3+n-1行：每行两个数 苹果高度xi，摘这个苹果需要的力气yi。
输出格式

只有一个整数，表示陶陶最多能摘到的苹果数。*/
#include <stdio.h>
int main()
{
    int n,m=0;
    float a, b, s;
    scanf("%d %f",&n,&s);
    scanf("%f %f",&a,&b);
    float x[n], y[n];
    int i,j,k;
    void sort(float a[],int n);
    for (i = 0; i < n;i++)
    {
        scanf("%f %f",&x[i],&y[i]);
    }
    
    for (j = 0, i = 0; i < n; i++)
    {
        if(x[i]>a+b)
            j++;
    }

    float z[n-j];

    for (k = 0, i = 0; i < n; i++)
    {
        if(x[i]<=a+b)
        {
            z[k] = y[i];
            k++;
        }
    }
    sort(z,n-j);
    float sum=0;
    for (k = 0; k < n-j;k++)
    {
        sum = sum + z[k];
        if(sum<=s)
        {
            m++;
        }
        else
        {
            break;
        }
    }
    printf("%d",m);
    system("pause");
    return 0;
}
void sort(float a[],int n)
{
    int i, j, k;
    float t;
    for (i = 0; i < n - 1;i++)
    {
        k = i;
        for (j = i + 1; j < n;j++)
        {
            if(a[k]>a[j])
            {
                t = a[k];
                a[k] = a[j];
                a[j] = t;
            }
        }
    }
}
