#include "shell.h"
int SH_execute(char **strcm)
{
	struct stat st;

	if (strcm[0] == NULL)
	{
		return (1);
	}
	else if (strcmp(strcm[0], "env") == 0)
	{
		env();
		return (1);
	}
	else if (strcmp(strcm[0], "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}

	return (SH_launch(strcm));
}
