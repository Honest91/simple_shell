#include "shell.h"

/**
 * _getenv - to get environment depend on command.
 *
 * @env: the environment.
 * @command: the command to search about.
 *
 * Return: the NULL if not exist else command anymore
 */
char *_getenv(char **env, char *command)
{
	int f = 0;
	int len = _strlen(command);

	for (f = 0; env[f]; f++)
	{
		if (_strcmp(command, env[f], len) == 0)
			return (env[f]);
	}

	return (NULL);
}

/**
 * print_env - to print environment.
 *
 *
 * @env: the environment to print.
 *
 * Return: void.
 */
void print_env(char **env)
{
	char **envp = env;

	while (*envp != NULL)
	{
		write(1, *envp, _strlen(*envp));
		write(1, "\n", 1);
		envp++;
	}
}
