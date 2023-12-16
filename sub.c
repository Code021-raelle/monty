#include "monty.h"

/**
 * sub - substracts the top element of the stack from the second top element
 *       of the stack.
 * @stack: double pointer to the top of the stack
 * @line_number: line number where the opcode appears
 *
 * Description: substracts the top elemet of the stack from the second top
 *              element of the stack.
 * If the stack contains less than two elements, it prints an error message
 * and exits with the status EXIT_FAILURE.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp1 = *stack;
	temp2 = (*stack)->next;

	temp2->n = temp2->n - temp1->n;
	free(temp1);
	*stack = temp2;
}

