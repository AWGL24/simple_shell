#include "shell.h"
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
