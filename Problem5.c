#include <stdio.h>

/*
 * 2520 is the smallest number that can be divided by each of the numbers
 * from 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all 
 * of the numbers from 1 to 20?
 */

int isPrime(int num)
{
	int i;
	for (i = 2; i <= num/2; i++)
	{
		if (num%i == 0)
		{ 
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

int main(int argc, char ** argv)
{
	long total;
	int i, j;
	int n = 20;
	int * primes, * primecount;
	int size = 0;

	primes = calloc(n, sizeof(int));
	primecount = calloc(n, sizeof(int));
	
	for (i = 2; i < n; i++)
	{
		
	}

	free(primes);
	free(primecount);
	return 0;
}
