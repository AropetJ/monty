#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

/** Header files **/
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>

/** Data structures **/
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct share_var - A struct that shares variables across files.
 *
 * @arg: Argument
 * @file: A pointer to the monty file
 * @items: line content
 * @flag: Used to to identify a change from stack queue
 * Description: Defines variables that we use across all our files
 */

typedef struct share_var
{
	char *arg;
	FILE *file;
	char *items;
	int flag;
} share_v;

/** Variables **/
extern share_v var;

/** Function definition **/
void _pall(stack_t **top, __attribute__((unused))unsigned int count);
void _push(stack_t **top, unsigned int i);
void _pint(stack_t **top, unsigned int count);
void _pop(stack_t **top, unsigned int count);
void _swap(stack_t **top, unsigned int i);
void addnode(stack_t **top, int element);
int exec(char *items, stack_t **stack, unsigned int count, FILE *file);
void free_stack(stack_t *top);
void _add(stack_t **top, unsigned int count);
void _nop(stack_t **top, unsigned int i);
void _sub(stack_t **top, unsigned int count);
void _queue(stack_t **top, unsigned int count);
void addqueue(stack_t **top, int n);

#endif
