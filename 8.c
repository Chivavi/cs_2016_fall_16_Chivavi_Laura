#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,determinant;
    float r1,r2;
    printf("Enter Coefficients a,b,c:");
    scanf("%d %d %d", &a, &b, &c);
    determinant= b*b-4*a*c;
    if (determinant>0)
    {
        r1 = (-b+sqrt(determinant))/(2*a);
        r2 = (-b-sqrt(determinant))/(2*a);
        printf ("roots of the equation are real and distinct", r1, r2);
        printf("\nRoots are: %f , %f", r1, r2);
    }
    if (determinant ==0)
    {
        r1=r2=-b/(2*a);
        printf("Roots of the equation are equal", r1, r2);
    }
   if (determinant<0)
    {
        printf("Both roots are imaaginar");
    }
    return 0;
}
