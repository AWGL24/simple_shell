#include "shell.h"
#define SH_TOK_BUFSIZE 64
#define SH_TOK_DELIM " \t\r\n\a"

/**
 *SH_splitline - this programs takes the userinput and divide them
 *@line: is the input of the user.
 *Return: tokens.
 */

char **SH_splitline(char *line)
{
	int bufsize = SH_TOK_BUFSIZE, position = 0;
	char **tokens;
	char *token, **tokens_backup;

	tokens = malloc(bufsize * sizeof(char *));

	if (!tokens)
	{
		perror("SH: allocation error\n");
		free(tokens);
		exit(EXIT_FAILURE);
	}

	token = strtok(line, SH_TOK_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		token = strtok(NULL, SH_TOK_DELIM);
	}
	tokens[position] = NULL;
	free(tokens);
	return (tokens);
}
