#include <stdio.h>
#include <locale.h>

int i = 0;

char strncpy(char * su, char * ty, int x)
{
	for (i = 0; i < x; i++)
	{
		su[i] = ty[i];
	}
}

char strncat(char * su, char * ty, int x)
{
	int count = 0;
	for (i = 0; i < 50; i++)
	{
		if (su[i] != '\0') count++;
		else break;
	}
	for (i = 0; i < x; i++)
	{
		su[i + count] = ty[i];
	}

}

int strncmp(char * su, char * ty, int x)
{
	for (i = 0; i < x; i++)
	{
		if (su[i] != ty[i]) return 0;
	}
	return 1;
}

int main()
{
	int x, n ;
	char ty[100], su[50];
	for (n = 0; n < 100; n++)
	{
		ty[n] = '\0';
	}
	for (n = 0; n < 50; n++)
	{
		su[n] = '\0';
	}
	printf("Enter your line: ");
	gets(ty);
	printf("enter number of character n: ");
	scanf("%i", &x);
	strncpy(su, ty, x);
	printf("Your line with the number of characters n: %s\n", su);
	strncat(su, ty, x);
	printf("Line from the last operation with an additional n symbols at the end of the line: %s\n", su);
	printf("Line from the last operation with an additional n symbols at the end of the line and original line are equal: %i\n");
	return 0;
}
