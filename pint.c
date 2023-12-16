#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * @stack: double pointer to the top of the stack
 * @line_number: line number where the opcode appears
 *
 * Description: prints the value at the top of the stack
 * If the stack is empty, it prints an error message and exits
 * with the status EXIT_FAILURE.
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

