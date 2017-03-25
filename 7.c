#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num1,num2,result,x, total;
    float per;
    char option;
do{
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("press 5 for percentage\n");
    printf("press 6 for power of\n");


    scanf("%d", &n);
    printf("Please Enter first number\n");
    scanf("%d", &num1);
    printf("Please Enter second number\n");
    scanf("%d", &num2);
    switch(n)
    {
        case 1: result=num1+num2;
                printf("addition of two numbers is %d", result);
                break;
        case 2: result=num1-num2;
                printf("%d", result);
                break;
        case 3: result=num1*num2;
                printf("%d", result);
                break;
        case 4: result=num1/num2;
                printf("%d", result);
                break;
        case 5: per=(num1*100)/num2;
                printf("%f", per);
                break;
        case 6: x=pow(num1,num2);
                printf("%d", x);
                break;

        defult:printf("wrong input");
    }
    printf("\n do you want to continue y/n?\n");
    option=getche();
}while(option=='y');
    getch();
    return 0;
}
