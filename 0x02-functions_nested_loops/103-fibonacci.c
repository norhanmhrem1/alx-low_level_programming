#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum = 0;
	unsigned long totalsum = 0;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			totalsum = totalsum + sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu", totalsum);
	return (0);
}
