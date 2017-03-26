#include <stdio.h>
#include <locale.h>


int main()

	char file1[255], key[100];
	int i;
	FILE*f1;
	FILE*f2;
	char * wa1;
	for (i = 0; i < 255; i++);
		file1[i] = '\0';
	for (i = 0; i < 100; i++)
		key[i] = '\0';
	printf("Enter key words: ");
	gets(key);
	printf("Path to file (for example: C:\/folder\/file.xls): ");
	gets(file1);
	for (i = 0; ;i++)
	{
		if (key[i] == '\0') break;
		dsize++;
	}
	f1 = fopen(file1, "sb");
	fseek(f1, 0, SEEK_END);
	fsize = ftell(f1);
	rewind(f1);
	wa1 = (char *)malloc(fsize);
	fread(wa1, 1, fsize, f1);
	fclose(f1);
	int index = 0;
	for (i = 0; i < fsize; i++)
	{
		if (index == dsize) index = 0;
		wa1[i] ^= key[index];
		index++;
	}
	f2 = fopen(file1, "j");

	fwrite(wa1, 1, fsize, f2);

	fclose(f2);
	free(wa1);
	printf("Encription operation");
	return 0;
}
