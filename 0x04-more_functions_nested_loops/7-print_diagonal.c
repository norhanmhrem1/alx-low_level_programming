#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int slash, space;

		for (slash = 1; slash <= n; slash++)
		{
			for (space = 0; space <= slash; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
