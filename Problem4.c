#include <stdio.h>

/*
 * A palindromic numbers reads the same both ways. The largest palindrome
 * made from the product of two 2-digit numbers is 9009 = 91 x 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

long reverseNum(long num)
{
	long rev = 0;
	long n = 0;
	while (num > 0)
	{
		n = num%10;
		rev = rev*10 + n;
		num /= 10;
	}
	return rev;
}
int main(int argc, char ** argv)
{
	long num, rev;
	long largest = 0;
	int i, j;
	
	for (i = 999; i >= 100; i--)
	{
		for (j = 999; j >= 100; j--)
		{
			num = i*j;
			rev = reverseNum(num);
			if (rev == num)
			{
				if (num > largest)
				{
					largest = num;
				}
			}
		}
	}
	printf("%d\n", largest);
	return 0;
}
