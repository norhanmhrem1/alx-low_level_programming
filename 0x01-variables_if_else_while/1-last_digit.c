#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * description - Prints the last digit of a randomly numbe
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n; 

	srand(time(0));
	n = rand() - RAND_MAX / 2;/
	int digit;
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n",digit,n);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",digit , n);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0\n",digit , n);
	return (0); 
}
