#include <stdio.h>

int fib(int n)
{
       if (n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
    int n = 0;
    int i = 0;
    printf("Enter N\n");
    scanf("%i", &n);
    for (i=0;i<=n;++i){
        printf("%i|%i\n", i, fib(i));
    }
    return 0;
}


