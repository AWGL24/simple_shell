#include "shell.h"

void SH_loop(void)
{
	char *line;
	char **args;
	int status;

	do {
		_putchar('$');
		_putchar(' ');
		line = SH_read_line();
		args = SH_split_line(line);
		status = SH_execute(args);

		free(line);
		free(args);
	} while (status);
}
