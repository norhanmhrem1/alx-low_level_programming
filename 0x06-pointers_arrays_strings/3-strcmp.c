#include "main.h"
#include <stdio.h>

/**
 *_strcmp - compare string values
 *@s1: input value
 *@s2: input value
 *
 *Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
	int size = 0;
	int size2 = 0;

	while (s1[size] != '\0' && s2[siz2e] != '\0')
	{
		if (s1[size] != s2[size2])
		{
			return (s1[size] - s2[size2]);
		}
		size++;
		size2++;
	}

	return (0);
}
