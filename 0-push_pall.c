#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: stack
 * @line_number: line number
 * @n: integer to push
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
void push(stack_t **stack, unsigned int line_number, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * pall - prints the stack
 * @stack: stack
 * @line_number: line number
 * Return: no return
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

