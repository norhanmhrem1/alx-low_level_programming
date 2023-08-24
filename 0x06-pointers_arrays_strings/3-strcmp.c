#include "main.h"
/**
 *_strcmp - compare string values
 *@s1: input value
 *@s2: input value
 *
 *Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
	int size;

	for (size = 0; s1[size] != '\0' && s2[size] != '\0'; size++)
	{
		if (s1[size] != s2[size])
		{
			return (s1[size] - s2[size]);
		}
		size++;
	}

	return (0);
}
