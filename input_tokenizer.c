#include "shell.h"

/**
 * tokens_number - the  number of tokens.
 *
 * @input: the input to get from.
 *
 * Return: the number of tokens.
 */
int tokens_number(char *input)
{
	char *delim = " \n";
	char *token;
	int len = 0;

	token = strtok(input, delim);
	while (token != NULL)
	{
		len++;
		token = strtok(NULL, delim);
	}

	return (len);
}

/**
 * input_tokenizer - the  tokenize user input.
 *
 * @input: the string to tokenize;
 * @av: the arg values;
 *
 * Return: tokens.
 */
char **input_tokenizer(char *input, char **av)
{
	char *delim = " \t\r\n", *input_copy = NULL, *token;
	int len = 0, f = 0;
	char **tokens = NULL;

	len = _strlen(input) + 1;
	input_copy = malloc(len * (sizeof(char)));
	if (input_copy == NULL)
	{
		_print(2, av, " :error in allocate memory");
		return (NULL);
	}
	_strcpy(input_copy, input);
	len = tokens_number(input_copy);
	free(input_copy);
	tokens = malloc((len + 1) * sizeof(char *));
	if (tokens == NULL)
	{
		_print(2, av, " :error in allocate memory");
		return (NULL);
	}
	token = strtok(input, delim);
	while (token != NULL)
	{
		tokens[f] = malloc((_strlen(token) + 1) * sizeof(char));
		if (tokens == NULL)
		{
			free_arr(tokens);
			_print(2, av, " :error in allocate memory");
			return (NULL);
		}
		_strcpy(tokens[f], token);
		token = strtok(NULL, delim);
		f++;
	}
	tokens[len] = NULL;
	return (tokens);
}
