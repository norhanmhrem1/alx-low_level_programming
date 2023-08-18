#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int w, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (w = 1; w <= size; w++)
		{
			for (space = 1; space <= size; space++)
			{
				if ((w + space) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
