#include "main.h"
/**
 *print_rev - imprime en reversa
 *@s: string
*/
void print_rev(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	int long;

	for (long = lenght; long > 0; long--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
