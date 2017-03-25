#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int number, counter, fact = 1;

    printf("Please Enter a Number:\n");
    scanf("%d", &number);

    if (number <0 ){
        printf("enter non negative number");
    }else{
        for (counter = number; counter >=1; counter--){
    fact = fact * counter;}

    printf("\nFactorial of %d is %d", number, fact);}
    return 0;
}
