#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num=0,i=0;
    int rem;
    while(n>0)
    {
        rem=n%10;
        num=num+rem*pow(2,i);
        i++;
        n=n/10;
    }

    printf("Decimal number is %d", num);
    return 0;
}
