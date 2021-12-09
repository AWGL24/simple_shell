#include "shell.h"
/**
 * main - executes the user input commands
 * @ac: unused
 * @av: unused
 * @env: enviroment
 * Return: 0
 */
int main(int ac, char **av __attribute__((unused)), char **env)
{
	int flag = 0;
	char *input;
	char **user_input = NULL;
	char **path = PATH(env);
	(void) ac;

	do {
		flag = check_isatty(flag);
		input = userinput();
		user_input = split_string(input);
		if (user_input[0] == NULL)
			continue;
		if (_strcmp(user_input[0], "exit") == 1)
		{
			safe_free(&input);
			memclean(path);
			exit(0);
		}
		else if (_strcmp(user_input[0], "env") == 1)
		{
			printenv(env, path);
			safe_free(&input);
		}
		else
		{
			input_validator(user_input, path);
			safe_free(&input);
			memclean(user_input);
		}
		if (flag == 0)
			memclean(path);
	} while (flag);
	return (0);
}
