#include "main.h"
void execArgsPiped(char **parsed, char **parsedpipe)
{
	int pipefd[2];
	pid_t p1, p2;

	if (pipe(pipefd) < 0)
		return;

	p1 = fork;

	if (p1 < 0)
		return;

	if (p1 == 0)
	{
		close(pipefd[0]);
		dup2(pipefd[1], STDOUT_FILENO);
		close(pipefd[1]);

		if (execvp(parsed[0], parsed) < 0)
		{
			exit(0);
		}
		else
		{
			p2 = fork;

			if (p2 < 0)
			{
				return;
			}

			if (p2 == 0)
			{
				close(pipefd[1]);
				dup2(pipefd[0], STDIN_FILENO);
				close(pipefd[0]);
				if (execvp(parsedpipe[0], parsedpipe) < 0)
				{
					exit(0);
				}
			}
			else
			{
				wait(NULL);
				wait(NULL);
			}
		}
	}
}
