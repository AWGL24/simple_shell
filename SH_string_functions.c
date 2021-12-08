#include "shell.h"

/**
 *_puts - putchar function
 *@str: a pointer to a string
 */

void _puts(char *str)
{
	while (*str)
		_putchar (*str++);

	_putchar('\n');
}

/**
 *_strcpy - copy string
 *@dest: destination
 *@src: string
 *Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i - 1] = '\0';

	return (dest);
}

/**
 *_strcmp - compresion of a string
 *@s1: string 1
 *@s2: string 2
 *Return: success
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/**
 *_strlen - length of a string
 *@str: string
 *Return: success
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
