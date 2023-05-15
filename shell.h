#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int start_shell(int ac, char **av, char **env);
char *get_input(char **av);

int _strlen(char *line);

#endif /*SHELL_H*/
