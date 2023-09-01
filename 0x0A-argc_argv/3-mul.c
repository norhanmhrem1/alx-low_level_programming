#include <stdio.h>
#include "main.h"

/**
 *main - multiplies two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: 0 (Success), 1 (Error)
*/

int main(int argc, char **argv)
{
	int multi;

	if (argc == 3)
	{
		multi = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
