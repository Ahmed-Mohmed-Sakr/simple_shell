#include "shell.h"

/**
 * _getenv - get environment depend on command.
 *
 * @env: environment.
 * @command: command to search about.
 *
 * Return: NULL if not exist else command
 */
char *_getenv(char **env, char *command)
{
	int i = 0;
	int len = _strlen(command);

	for (i = 0; env[i]; i++)
	{
		if (_strcmp(command, env[i], len) == 0)
			return (env[i]);
	}

	return (NULL);
}
