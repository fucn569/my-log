#include <stdio.h>
int main()
{
    printf("times\tRed\tWhite\tBlack\n");
    int red , white , black ,times=1;    //*取8个球的方案
    for (black = 0; black <= 6;black++)
    {
        for (red = 0; red <= 3;red++)
        {
            for (white = 0; white <= 3;white++)
            {
                if(red+white+black==8)
                    {
                        printf("%d\t%d\t%d\t%d\n",times,red,white,black);
                        times++;
                    }
                else
                    ;
            }
        }
    }
    system("pause");
    return 0;
}
