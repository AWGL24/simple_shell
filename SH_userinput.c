#include "shell.h"
/**
 * userinput - function takes the userinput and passes it to main.
 * Return: function returns the userinput without the new line.
 */

char *userinput(void)
{
	size_t size = 0;
	char *input = NULL;
	int len = 0;

	len = getline(&input, &size, stdin);
	input[len - 1] = '\0';
	if (check_space(input) == 1)
	{
		free(input);
		input = NULL;
	}
	return (input);
}
