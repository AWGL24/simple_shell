#include "shell.h"
/**
 * check_isatty - function that checks for interactive
 * and non-interactive shell
 * @flag: turns off flag
 * Return: return on or off
 */
int check_isatty(int flag)
{
	if (!isatty(STDIN_FILENO))
		flag = 0;
	else
	{
		flag = 1;
		_putchar('~');
		_putchar('$');
		_putchar(' ');
	}
	return (flag);
}
