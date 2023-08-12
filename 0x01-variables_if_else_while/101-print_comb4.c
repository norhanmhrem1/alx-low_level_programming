#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		int m = 49;

		while (m <= 57)
		{
			int i = 50;

			while (i <= 57)
			{
				if (i > m && m > n)
			{
				putchar(n);
				putchar(m);
				putchar(i);
				if (n != 55 || m != 56)
				{
					putchar (',');
					putchar (' ');
				}
			}
			i++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
