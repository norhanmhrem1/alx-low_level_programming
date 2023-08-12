#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;

	while (n <= 56)
	{
		int m = 49;

		while (m <= 57)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar (',');
					putchar (' ');
				}
			}
			m++;
		}
		n++;
	}
	return (0);
}
