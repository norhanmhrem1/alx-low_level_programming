#include "main.h"
#include <stdio.h>

/**
 *print_diagsums -  a function prints the sum of the two diagonals
 *of a square matrix of integers.
 *@a: second array of int types.
 *@size: size of array (square)
 *
*/

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", sum1)
	printf("%d\n", sum1)
}
