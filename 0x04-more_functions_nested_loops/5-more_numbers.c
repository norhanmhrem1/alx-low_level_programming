#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int row, mum;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar(1 + 48);
			_putchar (num % 10 + 48);
		}
		_putchar('\n');
	}
}
