#include "shell.h"

/**
 * _strcat - to concatinate two strings
 *
 * @dest: the 1st string and the final result.
 * @src: the string that we need to add.
 *
 * Return: the new string.
 */
char *_strcat(char *dest, const char *src)
{
	char *dest_temp = dest;
	const char *src_temp = src;

	while (*dest_temp != '\0')
		dest_temp++;

	while (*src_temp != '\0')
	{
		*dest_temp++ = *src_temp++;
	}
	*dest_temp = '\0';

	return (dest);
}
