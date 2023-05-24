#include "shell.h"


/**
 * exit_shell - exit shell.
 *
 * @tokens: commands to execute.
 *
 * Return: void.
 */
void exit_shell(char **tokens)
{
	if (tokens[1] == NULL)
	{
		free_arr(tokens);
		exit(0);
	}
	else
	{
		/*i will handle it later just let it now*/
		free_arr(tokens);
		exit(0);
	}
}
