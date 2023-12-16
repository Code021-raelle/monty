#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: double pointer to the top of the stack
 *
 * Description: The top element of the stack becomes the last one,
 * and the second top element of the stack becomes the first one.
 */
void rotl(stack_t **stack)
{
	stack_t *temp;
	stack_t *new_top;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	new_top = (*stack)->next;
	temp = new_top;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *stack;
	(*stack)->next = NULL;
	*stack = new_top;
}

