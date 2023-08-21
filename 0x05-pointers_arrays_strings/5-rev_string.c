#include "main.h"

/**
 *rev_string - Reverses a string
 *@s: Input string
 *Return: String in reverse
*/

void rev_string(char *s)
{
	char rev = s[0];
	int size = 0;

	int counter;

	while (s[size] != '\0')
		size++;

	for (counter = 0; counter < size; counter++)
	{
		counter--;
		rev = s[counter];
		s[counter] = s[size];
		s[size] = rev;
	}
}
