#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins to
 *make change for an amount of money
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int money, result, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	result = 0;
	for (i = 0; i < 5 && money  >= 0; i++)
	{
		if (money >= coins[i])
		{
			result += money / coins[i];
			if (money % coins[i] == 0)
			{
				break;
			}
			money = money % coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
