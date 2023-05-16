#ifndef SHELL_H
#define SHELL_H

/*lib*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/*main functions*/
int start_shell(int ac, char **av, char **env);
char *get_input(char **av);
char **input_tokenizer(char *input, char **av);
int tokens_number(char *input);
void execute_commands(char **tokens, char **av, char **env);

/*utili functions*/
int _strlen(char *line);
void _print(int status, char **av, char *message);

#endif /*SHELL_H*/
