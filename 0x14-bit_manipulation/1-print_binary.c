#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int bits, count, x;

	bits = sizeof(n) * 8;
	x = 1 << (bits - 1);
	count = 0;
	while (bits > 0)
	{
		if (n & x)
		{
			_putchar(1);
			count++;
		}
		else
			 _putchar(0);
	}
	if (!count)
		_putchar('0');
}
