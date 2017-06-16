#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t)

int main()
{
    int x, y, t;

    printf("Please entre values of x and y respectively:");
    scanf("%d%d", &x, &y);

    printf("values before swap are\nx = %d\ny = %d\n", x, y);
    t = x;
    x = y;
    y = t;
    printf("values after swap are\nx = %d\ny = %d\n", x, y);
    return 0;
}
