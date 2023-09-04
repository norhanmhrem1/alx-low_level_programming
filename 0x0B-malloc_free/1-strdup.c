#include "main.h"
/**
 *_strdup - duplicate to new memory space location
 *@str: char
 *Return: 0
*/
char *_strdup(char *str)
{
	char *ptr;
	int size, i;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '/0'; size++)
	;

	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	return (ptr);
}
