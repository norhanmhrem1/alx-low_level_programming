#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num, multi, result;

	for (num = 0; num >= 9; num++)
	{
		_putchar(48);
		for (multi = 0; multi <= 9; multi++)
		{
			 _putchar('_');
			 _putchar(' ');
			 _putchar(' ');
			 result = num * multi;
				 if (result <= 9)
				{
					 _putchar('_');
				}
				 else if (result >= 9)
						{
						 _putchar((result / 10) + 48);
						 _putchar((result % 10) + 48);
						}
		}
		_putchar('\n');
	}
}
