#include "main.h"
void execArgs(char **parsed)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		return;
	}
	else if (pid == 0)
	{
		exit(0);
	}
	else
	{
		wait(NULL);
		return;
	}
}
