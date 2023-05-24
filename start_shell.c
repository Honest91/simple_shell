#include "shell.h"

/**
 * start_shell -to entry point to the start shell
 *
 * @ac: arguments of counter.
 * @av: arguments of values.
 * @env: environment.
 *
 * Return:the ending status.
 */

int start_shell(int ac, char **av, char **env)
{
	char *shell_name = "AZA$ ";
	char *input = NULL;
	char **token = NULL;

	(void)ac;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, shell_name, 5);

		input = get_input(av);
		if (input == NULL)
			continue;

		token = input_tokenizer(input, av);
		if (token == NULL)
		{
			free(input);
			continue;
		}
		free(input);

		execute_commands(token, av, env);

		free_arr(token);
	}

	if (input != NULL)
		free(input);

	if (token != NULL)
		free_arr(token);
	return (0);

}
