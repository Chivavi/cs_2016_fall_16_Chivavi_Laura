#include <stdio.h>
#include <conio.h>

int main()
{
    int N,i, a=-1,b=1,c;
    printf("Enter a number:");
    scanf("%d", &N);
    for ( i=1; i<=N; i++ )
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

}
