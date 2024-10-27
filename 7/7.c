#include "../helper_functions/sieve_of_eratosthenes/soe.h"
#include <stdio.h>
int main()
{
	int* primes = sieve_of_eratosthenes(1000000);
	/* printf("\n\nPrinting primes:\n"); */
	/* for (int i=1; i<primes[0]+1; i++) */
	/* { */
	/* 	printf("%d\n",primes[i]); */
	/* } */
	printf("%d\n", primes[10001]);
	printf("%d\n", primes[primes[0]]);
	return 0;
}
