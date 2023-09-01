#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers.
 *@argc: Count arguments
 *@argv: Arguments
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	while (argc--)
	{
		for (i = 0; i <= argc; i++)
		{
			if (atoi(argv[argc]) < '0' || atoi(argv[argc]) > '9')
				return (printf("Error\n"), 1);
			sum = sum + atoi(argv[argc]);
		}

	}

	printf("%d\n", sum);
	return (0);
}
