#include "main.h"
/**
 *print_rev - imprime en reversa
 *@s: string
*/
void print_rev(char *s)
{
	int lenght = 0;
	int longg;

	while (*s != '\0')
	{
		lenght++;
	}
	lenght--;
	for (longg = lenght; longg > 0; longg--)
	{
		_putchar(*s + longg);
	}

	_putchar('\n');
}
