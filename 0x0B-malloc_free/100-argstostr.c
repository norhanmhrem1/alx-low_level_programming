#include "main.h"
/**
 *argstostr - main entry
 *@ac: int input
 *@av: double pointer array
 *Return: 0
*/
char *argstostr(int ac, char **av)
{
	int i, j, v = 0, r = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			v++;
	}
	v += ac;
	ptr = malloc(sizeof(char) * (v + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[r] = av[i][j];
			r++;
		}
		ptr[r] = '\n';
		r++;
	}
	ptr[r] = '\0';
	return (ptr);
}


