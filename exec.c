#include "monty.h"
/**
 * exec - carries out execution of our code
 * @stack: A linked list stack
 * @count: A counter to traverse
 * @file: A poiner to monty file
 * @items: Items in the linked list
 * Return: 1 on success
 */

int exec(char *items, stack_t **stack, unsigned int count, FILE *file)
{
	unsigned int i = 0;
	char *tokens;

	instruction_t ops[] = {{"push", _push}, {"pall", _pall},
				{"pint", _pint}, {"pop", _pop},
				{"swap", _swap}, {"add", _add},
				{"nop", _nop}, {"sub", _sub},
				{"div", _div}, {"mul", _mul},
				{"mod", _mod}, {"pchar", _pchar},
				{"pstr", _pstr}, {"rotl", _rotl},
				{"rotr", _rotr}, {"queue", _queue},
				{"stack", _stack}, {NULL, NULL}};

	tokens = strtok(items, " \n\t");
	if (tokens && tokens[0] == '#')
		return (0);
	var.arg = strtok(NULL, " \n\t");
	while (ops[i].opcode && tokens)
	{
		if (strcmp(tokens, ops[i].opcode) == 0)
		{
			ops[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (tokens && ops[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", count, tokens);
		fclose(file);
		free(items);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
