#include "shell.h"
/**
 * printenv - function that prints all the elements of the environment
 * Return: 0
 */
int printenv(void)
{
	int count = 0;

	while (environ[count] != NULL)
	{
		write(STDOUT_FILENO, environ[count], _strlen(environ[count]));
		write(STDOUT_FILENO, "\n", 1);
		count++;
	}
	return (0);
}
