#include "main.h"
/**
 *reverse_array - reverse array of integers
 *@a: array
 *@n: number of elements of array
 *
 *Return: void
*/
void reverse_array(int *a, int n)
{
	int size;
	int rev;

	n--;
	for (size = 0; size < n ; size++)
	{
		rev = a[size];
		a[size] = a[n++];
		a[n] = rev;
	}
}
