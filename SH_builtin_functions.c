#include "shell.h"
int _builtin_function(char **args)
{
	int idx = 0;
	pid_t pid;
	int status;

	builtin commands[] = {
		{"ls", "/bin/ls"},
		{"env", "/bin/env"},
		{"cat", "/bin/cat"},
		{NULL, NULL}
	};

	pid = fork();

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
