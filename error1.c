#include "monty.h"

int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
 * usage_error - It prints usage error messages
 * Return: It always returns EXIT_FAILURE
 **/

int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * malloc_error - It prints malloc error messages
 * Return: It always returns EXIT_FAILURE
 */

int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * f_open_error - It prints file opening error messages w/ filename
 * @filename: This is the name of the file failed to open
 * Return: It always returns EXIT_FAILURE
 */

int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * unknown_op_error - It prints unknown instruction error messages
 * @opcode: Opcode where error occurred
 * @line_number: This line num in Monty bytecodes file where error occured
 * Return: It always returns EXIT_FAILURE
 */

int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * no_int_error - It prints invalid monty_push arg. error messages
 * @line_number: This line num in Monty bytecodes file where error occurred
 * Return: It always returns EXIT_FAILURE
 */

int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
