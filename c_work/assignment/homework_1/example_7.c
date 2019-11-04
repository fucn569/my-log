#include <stdio.h>
#define PI 3.1416
int main()
{
    float r , h ;   //定义半径和高
    float C, S, S_global, V_global, V_cylinder; //定义各变量
    scanf("r=%f,h=%f",&r,&h);
    C = 2*PI * r;
    S = PI * r * r;
    S_global = 4 * PI * r * r;
    V_global = 4.0 / 3 * PI * r * r * r;
    V_cylinder = PI * r * r * h;
    printf("C is:%.2f\n", C);
    printf("S is:%.2f\n", S);
    printf("S_global is:%.2f\n", S_global);
    printf("V_global is:%.2f\n", V_global);
    printf("V_cylinder is:%.2f\n", V_cylinder);
    system("pause");
    return 0;
}
