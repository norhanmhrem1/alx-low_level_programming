#include "main.h"
/**
 *_strncat - concatenate two strings
 *using at most n bytes from src
 *@dest: input value
 *@src: input value
 *@n: input value
 *
 *Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int sizedest;
	int sizesrc;

	sizedest = 0;
	while (dest[sizedest] != '\0')
	{
		sizedest++;
	}

	for (sizesrc = 0; sizesrc < n && src[sizesrc] != '\0' ; sizesrc++)
	{
		dest[sizedest] = src[sizesrc];
		sizedest++;
	}

	dest[sizedest] = '\0';
	return (dest);
}
