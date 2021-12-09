#include "shell.h"
/**
 * concatenator - function that concatenates two strings
 * @PATH: PATH to be completed
 * @input: userinput
 * Return: PATH to be executed
 */
char *concatenator(char *PATH, char *input)
{
	int len1, len2, sum;
	char *concat;

	len1 = _strlen(PATH);
	len2 = _strlen(input);
	sum = len1 + len2;

	concat = malloc(sizeof(char) * (sum + 1));

	for (len1 = 0; PATH[len1] != '\0'; len1++)
	{
		concat[len1] = PATH[len1];
	}
	for (len2 = 0; input[len2] != '\0'; len2++)
	{
		concat[len1] = input[len2];
		len1++;
	}
	concat[sum] = '\0';
	return (concat);
}
