#include <stdio.h>
int main(){
    int a, b, c, sum;
    scanf("%d", &sum);
    //a+2*b+c*5=sum
    //a=sum-5*c-2*b
    for (c=0;c<=(sum/5);c++) {
    for (b=0; b<=(sum/2); b++) {
        a = sum - 5 * c - 2 * b;
        if (a >= 0)
        {
            printf("%d %d %d", a, b, c);
            printf("\n");
    }
    else {
        ;
    }
    }
    }
    system("pause");
    return 0;
}
