#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;
    printf("Input temperature in degree celcius:");
    scanf("%f", &temp);
    printf("Equivalent temperature in degree Fahrenheit is %f", temp*1.8+32);
    return 0;
}
