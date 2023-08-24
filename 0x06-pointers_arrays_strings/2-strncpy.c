#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: input value
 *@src: input value
 *@n: input value
 *
 *Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int size;

	for (size = 0; size < n && src[size] != '\0'; size++)
	{
		dest[size] = src[size];
	}

	while (size < n)
	{
	dest[size] = '\0';
	size++;
	}

	return (dest);
}
