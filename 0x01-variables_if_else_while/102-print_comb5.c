#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, r;

	for (i = 0; i < 100; i++)
	{
		for (r = 0; r < 100; r++)
		{
			if (i < r)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((r / 10) + 48);
				putchar((r % 10) + 48);
				if (i != 98 || r != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
