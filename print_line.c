#include "main.h"
void print_line(void)
{
	char cwd[1024];

	getcwd(cwd, sizeof(cwd));

	printf("%s", cwd);
}
