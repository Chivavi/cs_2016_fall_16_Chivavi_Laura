#include <stdio.h>
#include <locale.h>


double razni(double * m, int len)
{
	double x,y;
	int i;
	x = m[0];
	for (i = 0;i<len;i++)
	{	if(x<m[i])
        x = m[i];
	}
    y=m[0];
	for (i=0;i<len;i++)
	{	if(y>m[i])
        y=m[i];
	}
	return x - y;
}

int main()
{

	int len, i;
	double raz;
	printf("number of elements:");
	scanf("%i", &len);
	double * m = (double *)malloc(len*8);
	printf("Enter your array: ");
	for (i = 0; i < len; i++)
		scanf("%lf", &m[i]);
	raz = razni(m, len);
	printf("Difference between largest and smallest value: %lf\n", raz);
	return 0;
}
