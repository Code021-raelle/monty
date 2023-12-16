#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @stack: double pointer to the top of the stack
 * @line_number: line number where the opcode appears
 *
 * Description: prints the char at the top of the stack
 * The integer stored at the top of the stack is treated as the ASCII value
 * of the character to be printed.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int ascii_value;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	ascii_value = temp->n;

	if (ascii_value < 0 || ascii_value > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", ascii_value);
	free(temp);
	*stack = temp->next;
}

