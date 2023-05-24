#include "shell.h"

/**
 * _strcmp - to compare two strings.
 *
 * @s1: the first string
 * @s2: the second string
 * @len: the  length to compare in
 *
 * Return: 0 in match -1 else.
 *
 */
int _strcmp(char *s1, char *s2, size_t len)
{
	size_t f = 0;

	for (f = 0 ; s1[f] && s2[f] && f < len ; f++)
	{
		if (s1[f] != s2[f])
		{
			return (-1);
		}
	}

	if (f == len)
		return (0);

	return (-1);
}
