#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int bits, count;

	bits = sizeof(n) * 8;
	count = 0;
	while (bits > 0)
	{
		if (n & (1LU << (bits - 1)))
		{
			_putchar('1');
			count++;
		}
		else
		{
			 _putchar('0');
		}
		bits--;
	}
	if (count != 0)
		_putchar('0');
}
