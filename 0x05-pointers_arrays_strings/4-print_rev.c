#include "main.h"
/**
 *print_rev - imprime en reversa
 *@s: string
*/
void print_rev(char *s)
{
	int lenght = 0;

	while (s[lenght])
	{
		lenght++;
	}
	
	while (lenght--)
	{
		_putchar(s[lenght]);
	}

	_putchar('\n');
}
