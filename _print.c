#include "shell.h"

/**
 * _print - to print on screen depend on status
 *
 * @status: state(0,1,2).
 * @av: arg values.
 * @message: message to print.
 *
 * Return: void.
 */

void _print(int status, char **av, char *message)
{
	write(status, av[0], _strlen(av[0]));
	write(status, message, _strlen(message));
}
