/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int num, multi, result;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48)
				for (multi = 1; multi <= n; multi++)
				{
					_putchar(',');
					_putchar(' ');
					result = multi * num;
					if (result <= 9)
						_putchar(' ')
					if (result <= 99)
								_putchar(' ');
					if (result >= 100)
					{
						_putchar((result / 100) + 48);
						_putchar((result / 10) % 10 + 48);
					}
					else if (result <= 99 && result >= 10)
						_putchar((result / 10) + 48);
					_putchar((result / 10) + 48);
				}
		_putchar('\n');
		}
	}
}        
