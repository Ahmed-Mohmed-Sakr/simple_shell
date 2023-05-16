#include "shell.h"

/**
 * execute_commands - to execute comands.
 *
 * @tokens: arguments to execute.
 * @av: argument values.
 * @env: environment.
 *
 * Return: void.
 */

void execute_commands(char **tokens, char **av, char **env)
{
	pid_t child_pid;
	int stat;


	child_pid = fork();
	if (child_pid == -1)
	{
		_print(2, av, " :error in creating process");
		return;
	}

	if (child_pid == 0)
	{
		if (execve(tokens[0], tokens, env) == -1)
		{
			_print(2, av, " :error in execute");
			exit(1);
		}
	}
	else
	{
		wait(&stat);
	}
}
