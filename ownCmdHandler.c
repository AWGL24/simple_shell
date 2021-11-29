#include "main.h"
int ownCmdHandler(char **parsed)
{
	int NoOfOwnCmds = 4;
	int i;
	int switchOwnArg = 0;
	char *ListOfOwnCmds[NoOfOwnCmds];
	char *username;

	ListOfOwnCmds[0] = "exit";
	ListOfOwnCmds[1] = "cd";
	ListOfOwnCmds[2] = "help";
	ListOfOwnCmds[3] = "hello";

	for (i = 0; i < NoOfOwnCmds; i++)
	{
		if (strcmp(parsed[0], ListOfOwnCmds[i]) == 0)
		{
			switchOwnArg = i + 1;
			break;
		}
	}

	switch (switchOwnArg)
	{
		case 1:
			exit(0);
		case 2:
			chdir(parsed[1]);
			return (1);
		case 3:
			return (1);
		case 4:
			username = getenv("USER");
			printf("%s", username);
			return (1);
		default:
			break;
	}
	return (0);
}
