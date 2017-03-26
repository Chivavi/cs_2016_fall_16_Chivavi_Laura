#include <stdio.h>
#include <string.h>
char reverse( char *a)
{
int j=0,i,z;
char s[1000];
z=strlen(a);
for(i=z-1;i>=0;--i)
{
s[j]=a[i];
j++;
}
for(i=0;a[i]!='\0';++i)
{
a[i]=s[i];
}
return *a;
}
int main()
{
int i;
char st[1000];
gets(st);
reverse(st);
for( i=0;st[i]!='\0';++i)
{
printf("%c",st[i]);
} printf("\n");
return 0;
}
