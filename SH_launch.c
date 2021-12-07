#include "shell.h"
int SH_launch(char **args)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("SH");
			exit(EXIT_FAILURE);
		}
		else if (pid < 0)
		{
			perror("SH");
		}
		else
		{
			wait(&status);
		}
	}
	return (1);
}
