#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
*/
char *_strcat(char *dest, char *src)
{
	int sizedest;
	int sizesrc;

	sizedest = 0;
	while (dest[sizedest] != '\0')
	{
		sizedest++;
	}
	sizesrc = 0;
	while (src[sizesrc] != '\0')
	{
		dest[sizedest] = src[sizesrc];
		sizedest++;
		sizesrc++;
	}

	dest[sizedest] = '\0';
	return (dest);
}

