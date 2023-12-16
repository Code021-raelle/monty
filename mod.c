#include "monty.h"

/**
 * mod - computes the rest of the division of the second top
 * element of the stack
 * by the top element of the stack.
 * @stack: double pointer to the top of the stack
 * @line_number: line number where opcode appears
 *
 * Description: computes the rest of the division of the second top element
 * of the stack by the top element of the stack.
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp1 = *stack;
	temp2 = (*stack)->next;

	if (temp1->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp2->n = temp2->n % temp1->n;
	free(temp1);
	*stack = temp2;
}

