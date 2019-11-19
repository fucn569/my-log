#include <stdio.h>
#define M 2
#define N 2
int main() {

    int i, j;
    int a[i][j];
    int b[i][j],c[i][j];  //! 数组初始化不要填未初始化的数！
    printf("please input the first matrix:\n");
    for (i = 0; i < M; i++) {
        for (j=0; j<N; j++) {
            scanf("%d", &a[i][j]);

        }
    }
    for (i = 0; i < M; i++) {
        for (j=0; j<N; j++) {
            printf("%d\n",a[i][j]);

        }
    }

    printf("please input the second matrix:\n");
    for (i = 0; i < M; i++) {
        for (j=0; j<N; j++) {
            scanf("%d", &b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%d ", c[i][j]);
            if (j==N-1) {
            printf("\n");
            }
        }
    }
    //getchar();
    system("pause");
    return 0;
}
