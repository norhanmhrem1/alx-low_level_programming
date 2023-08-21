#include "main.h"
/**
 *puts_half - a function that prints half of a string
 *if odd len, n = (length_of_the_string - 1) / 2
 *@str: input
 *Return: half of input
*/
void puts_half(char *str)
{
	int size;

	for (size = 0; str[size] != '\n'; size++)
		;

	size++;
	for (size /= 2; str[size] != '\0'; size++)
	{
		_putchar(str[size]);
	}
}
