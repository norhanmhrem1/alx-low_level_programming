#include "main.h"

/**
 *string_nconcat - concatenates n bytes of a string to another string
 *@s1: string to append to
 *@s2: string to concatenate from
 *@n: number of bytes from s2 to concatenate to s1
 *
 *Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	if (n < size2)
		ptr = malloc(sizeof(char) * (size1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr = '\0';
	return (ptr);
}
