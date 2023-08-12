#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'A';
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
