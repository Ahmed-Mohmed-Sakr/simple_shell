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
	char *input = NULL;
	char **tokens = NULL;

	(void)ac;

	while (1)
	{
		write(1, shell_name, 5);
		input = get_input(av);
		tokens = input_tokenizer(input, av);

		execute_commands(tokens, av, env);

		free(input);
		free(tokens);
	}

}
