#include "shell.h"

/**
 * main - to entry the point to the start program
 *
 * @ac: arguments of the  counter.
 * @av: arguments of the  values.
 * @env: environment.
 *
 * Return: to return 0 on success
 */
int main(int ac, char **av, char **env)
{
	int stat;

	stat = start_shell(ac, av, env);

	return (stat);
}
