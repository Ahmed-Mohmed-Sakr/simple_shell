#include "shell.h"

/**
 * start_shell - entry point to start shell
 *
 * @ac: arguments counter.
 * @av: arguments values.
 * @env: environment.
 *
 * Return: ending status.
 */

int start_shell(int ac, char **av, char **env)
{
	char *shell_name = "AZA$ ";
	char *line = NULL;

	(void)ac;
	(void)env;

	while (1)
	{
		write(1, shell_name, 5);

		line = get_input(av);

		write(1, line, _strlen(line));

		free(line);
	}

}
