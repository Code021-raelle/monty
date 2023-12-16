#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: double pointer to the top of the stack
 * @line_number: line number where the opcode appears.
 *
 * Description: removes the top element of the stack
 * If the stack is empty, it prints an error message and exists with
 * the status EXIT_FAILURE.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: Can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}

