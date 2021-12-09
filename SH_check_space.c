#include "shell.h"
/**
 * check_space - checks for spaces in userinput
 * @input: userinput
 * Return: 1 if only spaces
 */
int check_space(char *input)
{
	int idx;

	idx = 0;

	while (input[idx] != '\0')
	{
		if (input[idx] != 32)
			return (0);
		idx++;
	}
	return (1);
}
