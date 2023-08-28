#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: srting.
 *@accept: bytes.
 *
 *return: the number of bytes n in the initial segment of s .
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}

	return (i);
}
