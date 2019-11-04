#include<stdio.h>
int main(){
    float a, b,res;
    char c;
    printf("Please input the caculate:");
    scanf("%f%c%f",&a,1,&c,&b);
    if(c=='+'){
        res = a + b;
            printf("%f,+%f=%f\n",&a,&b,&res);
    }
    else if(c=='-'){
        res=a-b;
    }

    else if(c=='*'){
        res = a * b;
    }

    else if(c=='/'){
        if(b==0){
            printf("not correct\n");
            system("pause");
            return 0;
        }
        else{
        res=a/b;
    }
    }
    printf("%f%c%f=%f\n", a, c, b, res);
    system("pause");
    return 0;

}
