#include "main.h"
/**
 *print_rev - imprime en reversa
 *@s: string
*/
void print_rev(char *s)
{
	int lenght = 0;
	int long;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	for (long = lenght; long > 0; long--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
