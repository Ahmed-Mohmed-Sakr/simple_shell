#include "shell.h"

/**
 * get_input - get input to shell exec
 *
 * @av: arg values
 *
 * Return: line readed;
 */

char* get_input(char *av)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	nread =  getline(&line, &len, stdin);
	if (nread == -1)
	{
		write(2,av[0],_strlen(av[0]));
		write(2," :can not read input\n",21);
		free(line);
	}

	return (line);
}
