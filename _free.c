#include "shell.h"

/**
 * free_arr - which free 2d array.
 *
 * @arr: array to free.
 *
 * Return: void.
 */

void free_arr(char **arr)
{
	int j = 0;

	if (arr == NULL)
		return;

	while (arr[j] != NULL)
	{
		free(arr[j]);
		j++;
	}
	free(arr);
}
