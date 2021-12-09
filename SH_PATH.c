#include "shell.h"
/**
 * PATH - function that saves the actual path into an 2darr
 * @environment: the actual environment
 * Return: function returns the PATH inside a 2darr
 */
char **PATH(char **environment)
{
	int idx;
	int space = 2;
	int lenght;
	char *pathinput = NULL;
	char *token = NULL;
	char **path = NULL;

	for (idx = 0; environment[idx] != NULL; idx++)
	{
		if (_strncmp(environment[idx], "PATH", 4) == 0)
			break;
	}

	pathinput = environment[idx];

	for (idx = 0; pathinput[idx] != '\0'; idx++)
	{
		if (pathinput[idx] == ':')
			space++;
	}

	path = malloc(sizeof(char *) * space);
	if (!path)
		return (NULL);

	token = strtok(pathinput, "=");
	space--;

	for (idx = 0; idx < space; idx++)
	{
		token = strtok(NULL, ":");
		lenght = _strlen(token);

		path[idx] = malloc(sizeof(char) * (lenght + 1));
		if (!path[idx])
			return (NULL);

		_strcpy(path[idx], token);
	}
	path[idx] = NULL;
	return (path);
}
