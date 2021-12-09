#include "shell.h"
/**
 * printenv - function that prints all the elements of the environment
 * @env: the environment
 * @PATH: the PATH stored in a 2darr
 */
void printenv(char **env, char **PATH)
{
	int idx, idx2, idx3, idx4;

	for (idx = 0; env[idx] != NULL; idx++)
	{
		if (_strncmp(env[idx], "PATH", 4) == 0)
		{
			for (idx3 = 0; env[idx][idx3] != '\0'; idx3++)
			{
				_putchar(env[idx][idx3]);
			}
			_putchar('=');
			for (idx4 = 0; PATH[idx4] != NULL; idx4++)
			{
				for (idx3 = 0; PATH[idx4][idx3] != '\0'; idx3++)
				{
					_putchar(PATH[idx4][idx3]);
				}
				if (PATH[idx4 + 1] != NULL)
					_putchar(':');
			}
			_putchar('\n');
		}
		else
		{
			for (idx2 = 0; env[idx][idx2] != '\0'; idx2++)
			{
				_putchar(env[idx][idx2]);
			}
			_putchar('\n');
		}
	}
}
