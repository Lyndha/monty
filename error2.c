#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - It prints pop error messages for empty stacks
 * @line_number: Line number in script where error occured
 * Return: (EXIT_FAILURE) always
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - It prints pint error messages for empty stacks
 * @line_number: Line number in Monty bytecodes file where error occurred
 * Return: It returns the EXIT_FAILURE
 */

int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - It prints monty math function error messages
 * @line_number: Line number in Monty bytecodes file where error occurred.
 * @op: Operation where the error occurred
 * Return: It returns the EXIT_FAILURE
 */

int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - It prints division error messages for division by 0.
 * @line_number: Line number in Monty bytecodes file where error occurred
 * Return: It returns the EXIT_FAILURE
 */

int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - Prints pchar error messages empty stacks, non-character values
 * @line_number: Line num in Monty bytecodes file where error occurred
 * @message: The corresponding error message to print
 * Return: It returns the EXIT_FAILURE
 */

int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
