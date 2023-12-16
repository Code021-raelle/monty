#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: double pointer to the top of the stack
 * @line_number: line number where the opcode appears
 *
 * Description: swaps the top two elements of the stack
 * If the stack contains less than two elements, it prints an error message
 * and exits with the status EXIT_FAILURE.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp1 = *stack;
	temp2 = (*stack)->next;

	temp1->n = temp1->n ^ temp2->n;
	temp2->n = temp1->n ^ temp2->n;
	temp1->n = temp1->n ^ temp2->n;
}

