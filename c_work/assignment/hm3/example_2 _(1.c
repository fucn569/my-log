#include <stdio.h>
int main()
{
    printf("Times\tRed\tWhite\tBlack\n");
    int red=0 , white=0 , black=0 ,times=1;
    while (black <= 6)
    {
        while (red <= 3)
        {
            while ( white <= 3)
            {
                if(red+white+black==8)
                {
                    printf("%d\t%d\t%d\t%d\n",times,red,white,black);
                    times++;
                }
                else
                    ;
                white++;
            }
            red++;
            white = 0;
        }
        black++;
        red = 0;
    }
    system("pause");
    return 0;
}
