#include "shell.h"
/**
 * input_validator - function that validates if user input is an executable
 * @user_input: array with the xecutable names and args
 * @PATH: array that contains the path
 */
void input_validator(char **user_input, char **PATH)
{
	struct stat st;
	int idx;
	char *full_path, *concat;

	printf("<%s>", user_input[0]);
	if (stat(user_input[0], &st) != 0)
	{
		for (idx = 0; PATH[idx] != NULL; idx++)
		{
			concat = concatenator(PATH[idx], "/");
			full_path = concatenator(concat, user_input[0]);
			safe_free(&concat);

			if (stat(full_path, &st) == 0)
			{
				executor(full_path, user_input);
				safe_free(&full_path);
				return;
			}
			else
			{
				safe_free(&full_path);
				continue;
			}
		}
	}
	if (stat(user_input[0], &st) == 0)
		executor(user_input[0], user_input);
	else
	{
		perror(user_input[0]);
	}
}
