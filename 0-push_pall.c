#include "monty.h"

/**
 * push - pushes an element to the stack
 * @head: stack head
 * @counter: no used
 * @line_number: line number
 * @n: integer to push
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int push(stack_t **head, unsigned int counter, unsigned int line_number, int n)
{
	stack_t *new_node;

	(void)counter;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (EXIT_SUCCESS);
}

/**
 * pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
 */
void pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

