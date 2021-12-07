#include "shell.h"
int main(void)
{
	char *str;
	char **strcm;
	int stat;

	do {
		write(1, "~$ ", 3);
		str = userinput();
		strcm = SH_splitline(str);
		stat = SH_execute(strcm);
		free(str);
		free(strcm);
	} while (stat);

	return (EXIT_SUCCESS);
}
