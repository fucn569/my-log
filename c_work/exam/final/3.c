#include <stdio.h>
int main()
{
int x = 2, y = -1, z = 0, a;
    a = ++x && ++y || z++;
    printf("%d %d %d %d\n", x, y,z,a);
    return 0;
}
