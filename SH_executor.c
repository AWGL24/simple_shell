#include "shell.h"
/**
 * executor - recieves user input and executes
 * @user_input: array with name and executable
 * @full_PATH: PATH with command
 */
void executor(char *full_PATH, char **user_input)
{
	int child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(full_PATH, user_input, NULL) == -1)
		{
			perror("not found");
			memclean(user_input);
			exit(EXIT_FAILURE);
		}
		safe_free(&full_PATH);
		memclean(user_input);
	}
	else
	{
		wait(&status);
	}
}
