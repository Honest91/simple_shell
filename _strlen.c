#include "shell.h"

/**
 * _strlen - the return string len.
 *
 * @line: the string that we need it's len.
 *
 * Return: the strlen of string.
 */
int _strlen(char *line)
{
	int len = 0;

	if (line == NULL)
		return (0);

	while (line[len])
		len++;

	return (len);
}
