#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: double pointer to the top of the stack
 *
 * Description: The last element of the stack becomes the top element
 * of the stack.
 */
void rotr(stack_t **stack)
{
	stack_t *temp;
	stack_t *last;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	last = *stack;
	while (last->next != NULL)
		last = last->next;

	last->next = NULL;
	temp = *stack;
	*stack = last;
	(*stack)->next = temp;
}

