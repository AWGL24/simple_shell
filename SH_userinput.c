#include "shell.h"

/**
 *userinput - The program evaluates the input of the user
 *Return: the command the user input
 */

char *userinput(void)
{
	size_t size = 0;
	int index, dest = 0;
	char *command, *buffer = NULL;

	index = getline(&buffer, &size, stdin);

	if (index < 0)
	{
		free(buffer);
		exit(EXIT_FAILURE);
	}

	command = malloc(sizeof(char) * _strlen(buffer));

	if (command == NULL)
	{
		free(command);
		exit(EXIT_FAILURE);
	}
	_strcpy(command, buffer);
	free(buffer);
	return (command);
}
