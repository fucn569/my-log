#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    char neck[N];
    cin >> neck;
    int i,j,k;
    // 从i处前面开始断开
    char sign;
    int temp=0;
    int m = 0;
    // m防止一条纯色链子一直重复
    int x,y;
    for(j=0;j<N;j++)
    {
        if(neck[0]==neck[j]||neck[j]=='w')
        {
            m++;
        }
    }
    if(m==N)
    {
        m = 1;
    }
    else
    {
        m = 0;
    }
    if(m==1)
    {
        temp = N;
    }
    else
    {
        for (i = 0; i<N;i++)
        {
            k = 0;
            sign = neck[i];
            y = i;
            while(sign=='w')
            {
                y++;
                sign = neck[y];
            }
            for (j = i;j<N;j++)
            {
                if(neck[j]==sign || neck[j]=='w')
                {
                    k++;
                }
                else
                {
                    break;
                }
                if(j==N-1)
                {
                    j = -1;
                }
            }
            if(i==0)
            {
                x = N - 1;
                sign = neck[x];
                while(sign=='w')
                {
                    x--;
                    sign = neck[x];
                }
            }
            else
            {
                sign = neck[i - 1];
                y = i-1;
                while(sign=='w')
                {
                    y--;
                    sign = neck[y];
                }
            }
            for (j = i;j>-1;)
            {
                if(k==N)
                {
                    break;
                }
                if(j==0)
                {
                    j = N-1;
                }
                else
                {
                    j--;
                }
                if(neck[j]==sign || neck[j]=='w')
                {
                    k++;
                }
                else
                {
                    break;
                }
            }
            if(k>temp)
            {
                temp = k;
            }
        }
    }
    cout << temp;
    return 0;
}
