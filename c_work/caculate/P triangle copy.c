#include <stdio.h>
#define N 10
int main()
{
    int i,j;
    int triangel[N][N];
    for (i = 0; i < N;i++)
    {
        triangel[i][0] = 1;
        triangel[i][i] = 1;
    }
    for (i = 2; i < N;i++)
    {
        for (j=1; j<=i-1; j++) {    //! j的判别式是关键！
            triangel[i][j] = triangel[i - 1][j - 1] + triangel[i - 1][j];
        }
    }
    for (i=0; i<N; i++)
    {
        for (j=0; j<=i; j++) {      //! j<N错误
        printf("%5d", triangel[i][j]);
    }
    printf("\n");
    }
    system("pause");
    return 0;
}
