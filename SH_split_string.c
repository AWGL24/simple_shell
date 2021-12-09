#include "shell.h"
/**
 * split_string - function that converts a string into an 2darr
 * @input: userinput
 * Return: created array
 */
char **split_string(char *input)
{
	char *token = NULL;
	char **array = NULL;
	int index;
	int space = 0;
	int lenght = 0;

	for (index = 0; input[index] != '\0'; index++)
	{
		if (input[index] == ' ')
		{
			space++;
		}
	}
	space += 2;

	array = malloc(sizeof(char *) * space);

	if (!array)
		return (NULL);

	token = strtok(input, " ");

	for (index = 0; token != NULL; index++)
	{
		lenght = _strlen(token);
		array[index] = malloc(sizeof(char) * (lenght + 1));

		if (!array[index])
			return (NULL);

		_strcpy(array[index], token);
		token = strtok(NULL, " ");
	}
	array[index] = NULL;
	return (array);
}
