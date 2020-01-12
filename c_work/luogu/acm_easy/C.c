#include <stdio.h>
int main()
{
    int s, m, t;
    scanf("%d %d %d", &m, &t, &s);
    if(t==0)
        ;
    else
        m = (m * t - s)/t;
    if(m<0)
    {
        m = 0;
    }
    printf("%d", m);
    return 0;
}
