#include "shell.h"

/**
 *memclean - function to clean the memory
 *@array: Array to be evaluated and free.
 *Return: success
 */

void memclean(char **array)
{
	int i;

	for (i = 0; array[i] != NULL; i++)
	{
		free(array[i]);
		array[i] = NULL;
	}
	free(array);
}

/**
 *safe_free - free the pointer
 * @ptr: pointer
 */

void safe_free(char **ptr)
{
	if (*ptr == NULL)
	{
		return;
	}
	else
	{
		free(*ptr);
		*ptr = NULL;
	}
}
