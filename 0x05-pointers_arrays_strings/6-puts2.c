#include "main.h"
/**
 *puts2 - function should print only one character out of two
 *starting with the first one
 *@str: input
 *Return: print
*/
void puts2(char *str)
{
	int size = 0;

	for (size = 0; str[size] != '\0'; size++)
	{
		if (size % 2 == 0)
			_putchar(str[size]);
	}
	_putchar('\n');
}
