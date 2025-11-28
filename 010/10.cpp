#import "../helper_functions/sieve_of_eratosthenes/soe.h"
#import <stdio.h>

int main() {
	int* primes = sieve_of_eratosthenes(2'000'000);
	long long sum = 0;
	for (int i=1; i<primes[0]+1; i++)
	{
		// printf("%d\n", primes[i]);
		sum+=primes[i];
	}
	printf("%lld\n", sum);

	return 0;
}
