#include "shell.h"


/**
 * exit_shell - the exit shell.
 *
 * @tokens:the commands to execute.
 *
 * Return: void.
 */
void exit_shell(char **tokens)
{
	int code = 0;

	if (tokens[1] == NULL)
	{
		free_arr(tokens);
		exit(code);
	}
	else
	{
		code = atoi(tokens[1]);
		free_arr(tokens);
		exit(code);
	}
}
