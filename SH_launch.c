#include "shell.h"

/**
 *SH_launch - This is the turn on of the shell.
 *@args: It’s an array we’re the commands you want execvp to
 * execute are stored.
 *Return: success
 */

int SH_launch(char **args)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
			perror("SH");
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
		perror("SH");
	else
		wait(&status);
	return (1);
}
