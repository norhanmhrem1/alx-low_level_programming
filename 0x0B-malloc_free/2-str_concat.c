#include "main.h"

/**
 *str_concat - get ends of input and add together for size
 *@s1: input one to concat
 *@s2: input two to concat
 *Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = 0;
	size2 = 0;
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	ptr = malloc(sizeof(char) * (size1 + size2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
		ptr[size1] = s1[size1];
	}
	for (size2 = 0; s2[size2] != '\0'; size2++, size1++)
	{
		ptr[size1] = s2[size2];
	}
	ptr[size1] = '\0';
	return (ptr);
}
