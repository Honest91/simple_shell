#include "shell.h"

/**
 * get_input - to get input to the shell exec
 *
 * @av: arg of the values
 *
 * Return: lineof the readed;
 */

char *get_input(char **av)
{
	char *linee = NULL;
	size_t length = 0;
	ssize_t nread;

	nread =  getline(&linee, &length, stdin);
	if (nread == -1)
	{
		if (feof(stdin))
		{
			free(linee);
			exit(0);
		}
		else
		{
			_print(2, av, " :can not read input\n");
			free(linee);
			return (NULL);
		}
	}

	if (linee[nread - 1] == '\n')
		linee[nread - 1] = '\0';

	return (linee);
}
