#include "shell.h"
#define SH_RL_BUFSIZE 1024

char *SH_readline(void)
{
	int bufsize = SH_RL_BUFSIZE;
	int position = 0;
	char *buffer;
	int c;

	buffer = malloc(sizeof(char) * bufsize);
	if (!buffer)
		exit(EXIT_FAILURE);

	while (1)
	{
		c = getchar();

		if (c == EOF || c == '\n')
		{
			buffer[position] = '\0';
			return (buffer);
		}
		else
		{
			buffer[position] = c;
		}
		position++;

		if (position >= bufsize)
		{
			bufsize += SH_RL_BUFSIZE;
			buffer = _realloc(buffer, bufsize);
			if (!buffer)
			{
				exit(EXIT_FAILURE);
			}
		}
	}
}
