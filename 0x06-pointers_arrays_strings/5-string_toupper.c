#include "main.h"
/**
 *string_toupper - change all lowercase to uppercase
 *@n: pointer
 *
 *Return: n
*/
char *string_toupper(char *n)
{
	int size;

	for (size = 0; n[size] != '\0'; size++)
	{
		if (n[size] >= 'a' && n[size] <= 'z')
			n[size] = n[size] - 32;
	}
	return (n);
}
