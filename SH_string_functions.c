#include "shell.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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
 *_strncmp - compares two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes it compares
 *Return: 0 if function fails
 */

int _strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;

	while (i < n && (s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
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
