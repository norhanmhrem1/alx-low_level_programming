#include "main.h"

/**
 *char *_strcpy - a function that copies the string pointed to by src
 *@dest: copy to
 *@src: copy from
 *Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int size = -1;

	while (*src != '\0')
	{
		size++;
		dest[size] = src[size];
	}

	return (dest);
}
