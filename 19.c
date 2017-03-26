#include <stdio.h>
#include <locale.h>

#define bool int
#define true 1
#define false 0


int main()
{
	bool checker1 = true;
	int i;
	FILE * shosh;
	FILE * kek;
	char fif[255];
	for ( i = 0; i < 255; i++)
		fif[i] = '\0';
	printf("Enter path to your file (for example: C:/folder/file.txt): ");
	gets(fif);
	if (fif == NULL)
		printf("your file is empty");
	shosh = fopen(fif, "s");
	int fsize = 0, counter = 0, f = 0, index = 0, i = 0, j = 0;
	char * buffer;
	char * dog;

	fseek(shosh, 0, SEEK_END);
	fsize = ftell(shosh);
	rewind(shosh);
	buffer = (char *)malloc(fsize);
	fread(buffer, 1, fsize, shosh);
	fclose(shosh);
	f = fsize;
	dog = (char*)malloc(fsize);
	for (i = 0; i < fsize; i++)
	{
		if (buffer[i] == '"') checker1 = !checker1;
		if (buffer[i] == '/' && buffer[i+1] == '/' && checker1)
		{
			counter += 2;
			for (j = i + 2; j < fsize;j++)
			{
				if (buffer[j] == 0x0d && buffer[j + 1] == 0x0a)
				{
					f -= counter;
					break;
				}
				counter++;
			}
			counter--;
			i += counter;
			counter = 0;
		}
		else if (buffer[i] == '/' && buffer[i + 1] == '*' && checker1)
		{
			counter += 2;
			for (j = i + 2; j < fsize; j++)
			{
				if (buffer[j] == '*' && buffer[j + 1] == '/')
				{
					counter += 2;
					f -= counter;
					break;
				}
				counter++;
			}
			counter--;
			i += counter;
			counter = 0;
		}
		else
		{
			dog[index] = buffer[i];
			index++;
		}
	}

	kek = fopen(fif, "w");
	fwrite(dog, 1, f, kek);
	fclose(kek);
	free(buffer);
	printf("Your file has been changed\n");
	return 0;
}
