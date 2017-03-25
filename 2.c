#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 main()
{
    int x = 22, y = 7;

    printf("Before Swap : \n");
    printf("x=%d, y=%d\n\n", 22, 7);

    x = x + y; //x=29
    y = x - y; //y=22
    x = x - y; //29-22=7

    printf("After Swap : \n");
    printf("x=%d, y=%d", 7, 22);
    getch();
}
