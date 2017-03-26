#include <stdio.h>
#include <stdlib.h>

void copy(char *c,char *x)
{
        FILE *C,*X;
        C=fopen(c,"r");
        X=fopen(x,"w");
        char i;
        while((i=fgetc(C))!=EOF)
        {
                fputc(i,X);
        }
}

int main()
{
        char a[1000],b[1000];
        printf("Enter path to the location of the file:");
        gets(a);
        printf("Enter the location of the file where to copy to:");
        gets(b);
        copy(a,b);
        printf("Your file");
        return 0;
 }
