#include <stdio.h>

/*
 * The prime factors of 13195 are 5, 7, 13, 29.
 *
 * What is the largest prime factor of the number 600851475143?
 */

int main(int argc, char ** argv)
{
	int i;
	long num = 600851475143;
  	int largestFac = 0;
	for (i = 2; i <= (long)num/i; i++)
	{
		while (num%i == 0)
		{
			if(largestFac == 0)
			{
				largestFac = i;
			}
			else
			{
				if (i > largestFac)
				{
					largestFac = i;
				}
			}
			num /= i;
		}
	} 
	if (num > 1)
	{
		if (num > largestFac)
		{
			largestFac = num;
		}
	}

	printf("%d\n", largestFac);

	return 0;
}
