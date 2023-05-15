#include "shell.h"

/**
 * tokens_number - to get number of tokens.
 *
 * @input: input to get from.
 *
 * Return: number of tokens.
 */
int tokens_number(char *input)
{
	char *delim = " \n";
	char *token;
	int len = 0;

	token = strtok(input, delim);
	while (token != NULL)
	{
		len++;
		token = strtok(NULL, delim);
	}

	return (len);
}

/**
 * input_tokenizer - to tokenize user input.
 *
 * @input: string to tokenize;
 * @av: arg values;
 *
 * Return: tokens.
 */
char **input_tokenizer(char *input, char **av)
{
	char *delim = " \n", *input_copy = NULL, *token;
	int len = 0, i = 0;
	char **tokens = NULL;

	len = _strlen(input) + 1;
	input_copy = malloc(len * (sizeof(char)));
	if (input_copy == NULL)
	{
		print_val(2, av, " :error in allocate memory");
		return (NULL);
	}
	strcpy(input_copy, input);
	len = tokens_number(input_copy);
	free(input_copy);

	tokens = malloc(len * sizeof(char *));
	if (tokens == NULL)
		print_val(2, av, " :error in allocate memory");

	token = strtok(input, delim);
	while (token != NULL)
	{
		tokens[i] = malloc(_strlen(token) * sizeof(char));
		if (tokens == NULL)
		{
			while (i >= 0)
				free(tokens[i--]);

			free(tokens);
			print_val(2, av, " :error in allocate memory");
			break;
		}
		tokens[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	return (tokens);
}
