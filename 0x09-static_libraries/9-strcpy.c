#include "main.h"

/**
 *char *_strcpy - a function that copies the string pointed to by src
 *@dest: copy to
 *@src: copy from
 *Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int size = 0;

	while (src[size] != '\0')
	{
		dest[size] = src[size];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
