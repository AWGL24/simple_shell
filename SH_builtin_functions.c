#include "shell.h"

/**
 *_builtin_function - This prograsm evaluates the commands that of
 *the user input.
 *@args: is the userintput
 *Return: success.
 */
int _builtin_function(char **args)
{
	int idx = 0;
	pid_t pid;
	int status;

	pid = fork();

	builtin commands[] = {
		{"ls", "/bin/ls"},
		{"env", "/bin/env"},
		{"cat", "/bin/cat"},
		{NULL, NULL}
	};

	while (commands[idx].cm != NULL)
	{
		if (_strcmp(commands[idx].cm, args[0]) == 0)
		{
			if (pid == 0)
			{
				if (execve(commands[idx].dir, args, NULL) == -1)
					perror("builtin");
				exit(EXIT_FAILURE);
			}
			else if (pid < 0)
				perror("launch");
			else
				wait(&status);
		}
		idx++;
	}
	if (commands[idx].cm != NULL)
		return (SH_launch(args));
	return (0);
}
