#include <stdio.h>

 int main()
 {
float r1, r2, R;
printf("Value of first resistor: ");
scanf("%f",&r1);
printf("Value of second resistor: ");
scanf("%f",&r2);
R=r1*r2/(r1+r2);
printf("Equivalent complex resistance of two parallel impedances parallely connected: %f\n",R);

float a, b, k, z, x, y;
printf("Enter value of resistors in complex form: ");
scanf("%f+%fi %f+%fi", &a, &b, &k, &z);
x = (a*a*k + a*k*k + a*z*z + b*b*k) / ((a + k)*(a + k) + (b + z)*(b + z));
y = (a*a*z + b*b*z + b*k*k + b*z*z) / ((a + k)*(a + k) + (b + z)*(b + z));
printf("Equivalent complex resistance: %.4f+%.4fi", x, y);
 return 0;
 }
