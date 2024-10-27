#include <stdio.h>
int main()
{
	long a;
	long b;
	long c;
	for (a=1;;a++)
	{
		for (b=2;;b++)
		{
			for (;a+b+c<1001;c++)
			{
				if ((a*a + b*b) == (c*c))
					printf("GOT: %ld %ld %ld\n", a, b, c);
				printf("%ld %ld %ld\n", a, b, c);
			}
		}
	}
	return 0;
}
