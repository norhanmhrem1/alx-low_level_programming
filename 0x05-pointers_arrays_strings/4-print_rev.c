#include "main.h"
/**
 *print_rev - imprime en reversa
 *@s: string
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
		s++;

	while (s[i] > 0 )
		_putchar(s[i]);
		s--

	_putchar('\n');
}
