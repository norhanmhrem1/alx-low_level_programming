#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: memory area to be filled
 *@b: char to copy
 *@n: number of times to copy b
 *
 *Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (ptr);
}
/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements in the array
 *@size: size of each element
 *
 *Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *r;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = malloc(sizeof(int) * nmemb);
	if (r == NULL)
		return (NULL);

	_memset(r, 0, sizeof(int) * nmemb);
}
