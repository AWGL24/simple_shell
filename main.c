#include "shell.h"
/**
 * main - executes the user input commands
 * @env: enviroment
 * Return: 0
 */
int main(char **env)
{
	int flag = 0;
	char *input;
	char **user_input = NULL;
	char **path = PATH(env);

	do {
		flag = check_isatty(flag);
		input = userinput();
		if (input == NULL)
			continue;
		if (_strcmp(input, "exit") == 1)
		{
			safe_free(&input);
			memclean(path);
			exit(0);
		}
		else if (_strcmp(input, "env") == 1)
		{
			printenv(env, path);
			safe_free(&input);
		}
		else
		{
			user_input = split_string(input);
			input_validator(user_input, path);
			safe_free(&input);
			memclean(user_input);
		}
		if (flag == 0)
			memclean(path);
	} while (flag);
	return (0);
}
