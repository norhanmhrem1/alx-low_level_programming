#include "main.h"
/**
 *print_rev - imprime en reversa
 *@s: string
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	
	while (*s >= 0)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
