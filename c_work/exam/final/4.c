#include <stdio.h>
int main()
{
    int i=0,z=0;
    i = z++;
    printf("%d\n", i);
    z = 0;
    i = ++z;
    printf("%d\n", i);
    return 0;
}
/*int z++
{
    int temp;
    temp = z;
    z = z + 1;
    return temp;
}
void z++
{
    int temp;
    temp = z;
    z = z + 1;
    return temp;
}
int ++z
{
    z = z + 1;
    return z;
}*/
