#include "shell.h"
int env(void)
{
	int counter;

	for (counter = 0; environ[counter] != NULL; counter++)
	{
		write(STDOUT_FILENO, environ[counter], _strlen(environ[counter]));
		write(STDOUT_FILENO, "\n", 1);
	}

	return (0);
}
