#include "main.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previsouly allocated by malloc
 *@old_size: size of the allocated memory for ptr
 *@new_size: new size of the new memory block
 *
 *Return: pointer to the newly allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p; /* reallocated pointer */
	unsigned int i;

	/* free memory if reallocate 0 */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* return ptr if reallocating same old size */
	if (new_size == old_size)
		return (ptr);

	/* malloc new size if ptr is originally null */
	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		else
			return (p);
	}
	/* malloc and check error */
	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	/* fill up values up till minimum of old or new size */
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);

	free(ptr); /* free old ptr */

	return (p);

}
