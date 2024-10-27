#include <stdio.h>
#define SUM 1000
int main()
{
	for (int a=1; a<SUM/3; a++)
	{
		int b, c;
		b=a+1;
		c=1000-(a+b);
		for (; b<c; b++)
		{
			c = 1000-(a+b);
			printf("a:%d b:%d c:%d\n", a, b, c);
			if (a*a+b*b == c*c)
			{
				printf("%d\n", a*b*c);
				return 0;
			}
		}
	}
	return 0;
}
