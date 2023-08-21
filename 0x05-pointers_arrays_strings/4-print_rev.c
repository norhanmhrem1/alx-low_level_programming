#include "main.h"
/**
 *print_rev - imprime en reversa
 *@s: string
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
		i++;

	while (i--)
		_putchar(*s + 0);

	_putchar('\n');
}
