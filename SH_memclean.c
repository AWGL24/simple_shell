#include "shell.h"
/**
 * memclean - function that frees up mem
 * @array: array that will be freed
 */
void memclean(char **array)
{
	int index;

	index = 0;

	while (array[index] != NULL)
	{
		free(array[index]);
		array[index] = NULL;
	}
	free(array);
}

/**
 * safe_free - function that frees including NULL
 * @ptr: element to be freed
 */
void safe_free(char **ptr)
{
	if (!ptr)
		return;
	else
	{
		free(*ptr);
		*ptr = NULL;
	}
}
