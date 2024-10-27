#include <stdio.h>
#include <string.h>
int main()
{
	FILE* fp = fopen("input.txt", "r");
	long max=0;
	char best[13];
	char current[13];
	fseek(fp, 0L, SEEK_END);
	int file_size = ftell(fp);
	fseek(fp, 0L, SEEK_SET);
	for (int i=0; i<file_size-11; i++)
	{
		long prod=1;
		for (int j=0; j<13; j++)
		{
			printf("%d\n", ftell(fp));
			current[j] = fgetc(fp);
			prod=prod*(current[j]-'0');
		}
		for (int i=0; i<13; i++)
		{
				printf("%c", current[i]);
		}
		printf("\n");
		if (prod>max)
		{
			max=prod;
			for (int j=0; j<13; j++)
				best[j] = current[j];
			
		}
		fseek(fp, -12L, SEEK_CUR);
	}
	for (int i=0; i<13; i++)
	{
		printf("%c", best[i]);
	}
	printf("\n%ld\n", max);
}
