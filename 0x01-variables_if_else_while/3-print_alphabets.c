#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH = CH + 1;
	}
	putchar('\n');

	return (0);
}
