#include "shell.h"

/**
 *
 */
int custom_commands(char **tokens)
{
	if ( _strcmp(tokens[0], "env", 3) == 0)
	{
		print_env();

		return (1);
	}

	return (0);
}
