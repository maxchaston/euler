#include "soe.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static void print_nums(int* nums, int size)
{
	for (int i=0; i<size; i++)
		printf("%d ", nums[i]);
	printf("\n");
}

int* sieve_of_eratosthenes(int limit)
{
  int* nums;
	int nums_size = limit-2;
	nums = (int*)malloc(sizeof(int)*nums_size); // starts from 2 and calculates up to limit exclusive
  int* primes;
	int primes_size = 0;
  int loop=1;
  for (int i=2; i<limit; i++) // setup nums array
	{ 
    nums[i-2] = i;
  }
  while(1)
	{
		/* printf("nums_size: %d\n", nums_size); */
		if (nums_size==0)
		{
			int* final_primes = (int*)malloc((primes_size+1)*sizeof(int));
			final_primes[0] = primes_size;
			for (int i=0;i<primes_size;i++)
				final_primes[i+1] = primes[i];
			return final_primes;
		}
		/* print_nums(nums, nums_size); */
		primes_size++;
    int* updated_primes = (int*)malloc(primes_size * sizeof(int));
		memcpy(updated_primes, primes, (primes_size-1)*sizeof(int));
		free(primes);
    primes = updated_primes;
		primes[primes_size-1] = nums[0];
    int* updated_nums = (int*)malloc(nums_size*sizeof(int)); // new numbers being tested, realloc later
		int updated_nums_index = 0;
		int numbers_remaining= 0;
		for (int i=1; i<nums_size; i++)
		{
			if (nums[i]%nums[0]!=0) // nums[0] is the smallest prime number not checked
			{
				updated_nums[updated_nums_index] = nums[i];
				updated_nums_index++;
				numbers_remaining++;
			}
		}
		nums_size = numbers_remaining;
		nums = (int*)realloc(nums, nums_size*sizeof(int));
		memcpy(nums, updated_nums, nums_size*sizeof(int));
		free(updated_nums);
  }
}
