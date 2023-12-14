#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: current line number in the Monty bytecode file
 *
 * Return: Nothing.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

