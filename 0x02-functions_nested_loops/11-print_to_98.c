#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int counter;

	if (n > 98)
		for (counter = n; counter > 98; counter--)
			printf("%d, ", counter);
	else
		for (counter = n; counter < 98; counter++)
			printf("%d, ", counter);
	printf("%d\n", n);
}
