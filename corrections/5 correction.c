#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int C, F;
    int lower, upper, step;
    lower = -100;
    upper = 100;
    step = 5;
    C = lower;

       while(C <= upper)
    {
    F = C*1.8+32;
    printf("%d\t%d\n", C, F);
    C= C + step;
    }
    return 0;
}
