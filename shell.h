#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*main functions*/
int start_shell(int ac, char **av, char **env);
char *get_input(char **av);
char **input_tokenizer(char *input, char **av);
int tokens_number(char *input);

/*utili functions*/
int _strlen(char *line);
void _print(int status, char **av, char *message);

#endif /*SHELL_H*/
